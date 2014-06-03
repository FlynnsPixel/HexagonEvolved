#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_build_game_entities_Ship
#include <core/build/game/entities/Ship.h>
#endif
#ifndef INCLUDED_core_build_game_managers_AssetManager
#include <core/build/game/managers/AssetManager.h>
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
#ifndef INCLUDED_core_build_game_tools_ColourChanger
#include <core/build/game/tools/ColourChanger.h>
#endif
#ifndef INCLUDED_core_build_game_ui_UIManager
#include <core/build/game/ui/UIManager.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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

Void StageManager_obj::__construct()
{
HX_STACK_PUSH("StageManager::new","core/build/game/stage/StageManager.hx",21);
{
	HX_STACK_LINE(50)
	this->hexagondir = (int)0;
	HX_STACK_LINE(49)
	this->hexagontimer = (int)1;
	HX_STACK_LINE(48)
	this->rotatedirdest = (int)500;
	HX_STACK_LINE(47)
	this->rotatedirtimer = (int)0;
	HX_STACK_LINE(46)
	this->rotationdirection = (int)0;
	HX_STACK_LINE(43)
	this->ingame = false;
	HX_STACK_LINE(42)
	this->gamemode = (int)0;
	HX_STACK_LINE(41)
	this->mode = (int)0;
	HX_STACK_LINE(40)
	this->midy = (int)0;
	HX_STACK_LINE(39)
	this->midx = (int)0;
	HX_STACK_LINE(38)
	this->incrementangle = (int)0;
	HX_STACK_LINE(37)
	this->increment = (int)0;
	HX_STACK_LINE(34)
	this->sectors = (int)6;
	HX_STACK_LINE(31)
	this->pause = true;
	HX_STACK_LINE(30)
	this->hittimer = (int)0;
	HX_STACK_LINE(29)
	this->hit = false;
	HX_STACK_LINE(53)
	this->container = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(54)
	int size = ::Std_obj::_int((::core::build::game::managers::Universe_obj::stage->get_stageWidth() * 1.25));		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(55)
	if (((::core::build::game::managers::Universe_obj::stage->get_stageHeight() >= size))){
		HX_STACK_LINE(55)
		size = ::Std_obj::_int((::core::build::game::managers::Universe_obj::stage->get_stageHeight() * 1.25));
	}
	HX_STACK_LINE(56)
	this->rect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,size,size);
	HX_STACK_LINE(57)
	this->point = ::flash::geom::Point_obj::__new((int)0,(int)0);
}
;
	return null();
}

StageManager_obj::~StageManager_obj() { }

Dynamic StageManager_obj::__CreateEmpty() { return  new StageManager_obj; }
hx::ObjectPtr< StageManager_obj > StageManager_obj::__new()
{  hx::ObjectPtr< StageManager_obj > result = new StageManager_obj();
	result->__construct();
	return result;}

Dynamic StageManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageManager_obj > result = new StageManager_obj();
	result->__construct();
	return result;}

Void StageManager_obj::secondschanged( ){
{
		HX_STACK_PUSH("StageManager::secondschanged","core/build/game/stage/StageManager.hx",253);
		HX_STACK_THIS(this);
		HX_STACK_LINE(254)
		if (((hx::Mod(::core::build::game::managers::Universe_obj::uimanager->seconds,(int)10) == (int)0))){
			HX_STACK_LINE(255)
			if (((this->rotationdirection >= (int)0))){
				HX_STACK_LINE(255)
				hx::AddEq(this->rotationdirection,(Float(((::Math_obj::random() - ::Math_obj::random()))) / Float((int)5)));
			}
			else{
				HX_STACK_LINE(256)
				hx::SubEq(this->rotationdirection,(Float(((::Math_obj::random() - ::Math_obj::random()))) / Float((int)5)));
			}
			HX_STACK_LINE(257)
			hx::SubEq(::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate,((int)1 + ::Math_obj::round((::Math_obj::random() * (int)5))));
			HX_STACK_LINE(258)
			if (((::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate <= (int)10))){
				HX_STACK_LINE(258)
				::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)10;
			}
			HX_STACK_LINE(259)
			hx::AddEq(::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed,(.5 + ::Math_obj::random()));
			HX_STACK_LINE(260)
			if (((::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed >= (int)20))){
				HX_STACK_LINE(260)
				::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)20;
			}
		}
		HX_STACK_LINE(262)
		if (((hx::Mod(::core::build::game::managers::Universe_obj::uimanager->seconds,(int)60) == (int)0))){
			HX_STACK_LINE(263)
			++(this->mode);
			HX_STACK_LINE(264)
			if (((this->mode >= (int)5))){
				HX_STACK_LINE(264)
				this->mode = (int)5;
			}
			HX_STACK_LINE(265)
			this->draw(true);
			HX_STACK_LINE(266)
			this->updatelevelvalues();
			HX_STACK_LINE(267)
			::core::build::game::managers::Universe_obj::obstaclemanager->pausespawning = false;
			HX_STACK_LINE(268)
			this->hittimer = (int)0;
		}
		else{
			HX_STACK_LINE(269)
			if (((hx::Mod(::core::build::game::managers::Universe_obj::uimanager->seconds,(int)60) == (int)59))){
				HX_STACK_LINE(270)
				::core::build::game::managers::Universe_obj::obstaclemanager->reverseobstacles(true);
				HX_STACK_LINE(271)
				::core::build::game::managers::Universe_obj::obstaclemanager->pausespawning = true;
				HX_STACK_LINE(272)
				this->hittimer = (int)999;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageManager_obj,secondschanged,(void))

Void StageManager_obj::updatelevelvalues( ){
{
		HX_STACK_PUSH("StageManager::updatelevelvalues","core/build/game/stage/StageManager.hx",214);
		HX_STACK_THIS(this);
		HX_STACK_LINE(215)
		::core::build::game::managers::Universe_obj::assets->playsound(::core::build::game::managers::Universe_obj::player->rotationindex,true);
		HX_STACK_LINE(216)
		this->increment = ((Float((Float((Float((int)360) / Float(this->sectors))) / Float((int)2))) / Float(((Float((int)180) / Float(::Math_obj::PI))))) * (int)2);
		HX_STACK_LINE(217)
		this->incrementangle = ::Math_obj::round((this->increment * ((Float((int)180) / Float(::Math_obj::PI)))));
		HX_STACK_LINE(219)
		::core::build::game::managers::Universe_obj::player->dest = (int)0;
		HX_STACK_LINE(220)
		::core::build::game::managers::Universe_obj::player->angle = this->incrementangle;
		HX_STACK_LINE(221)
		::core::build::game::managers::Universe_obj::player->set_rotation(this->incrementangle);
		HX_STACK_LINE(222)
		::core::build::game::managers::Universe_obj::player->destoffset = (int)0;
		HX_STACK_LINE(223)
		if (((this->sectors == (int)4))){
			HX_STACK_LINE(223)
			::core::build::game::managers::Universe_obj::player->set_rotation((Float(this->incrementangle) / Float((int)2)));
			HX_STACK_LINE(223)
			::core::build::game::managers::Universe_obj::player->dest = ::core::build::game::managers::Universe_obj::player->get_rotation();
		}
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::core::build::game::stage::StageManager _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			switch( (int)(_g->mode)){
				case (int)0: {
					HX_STACK_LINE(227)
					this->rotationdirection = (int)2;
					HX_STACK_LINE(228)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)65;
					HX_STACK_LINE(229)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)5;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(231)
					this->rotationdirection = 2.8;
					HX_STACK_LINE(232)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)35;
					HX_STACK_LINE(233)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)8;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(235)
					this->rotationdirection = 3.2;
					HX_STACK_LINE(236)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)50;
					HX_STACK_LINE(237)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(239)
					this->rotationdirection = (int)4;
					HX_STACK_LINE(240)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)15;
					HX_STACK_LINE(241)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)6;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(243)
					this->rotationdirection = (int)5;
					HX_STACK_LINE(244)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)20;
					HX_STACK_LINE(245)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)10;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(247)
					this->rotationdirection = (int)5;
					HX_STACK_LINE(248)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)25;
					HX_STACK_LINE(249)
					::core::build::game::managers::Universe_obj::obstaclemanager->obstaclespeed = (int)15;
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageManager_obj,updatelevelvalues,(void))

Void StageManager_obj::reset( ){
{
		HX_STACK_PUSH("StageManager::reset","core/build/game/stage/StageManager.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_LINE(198)
		this->hit = false;
		HX_STACK_LINE(199)
		this->pause = false;
		HX_STACK_LINE(200)
		this->ingame = true;
		HX_STACK_LINE(201)
		this->hexagon->set_scaleX((int)5);
		HX_STACK_LINE(202)
		this->hexagon->set_scaleY((int)5);
		HX_STACK_LINE(203)
		::core::build::game::managers::Universe_obj::obstaclemanager->obstacletimer = (int)0;
		HX_STACK_LINE(204)
		this->rotatedirtimer = (int)0;
		HX_STACK_LINE(205)
		this->hittimer = (int)0;
		HX_STACK_LINE(206)
		this->rotationdirection = (int)2;
		HX_STACK_LINE(207)
		::core::build::game::managers::Universe_obj::uimanager->removemenu();
		HX_STACK_LINE(208)
		::core::build::game::managers::Universe_obj::player->set_visible(true);
		HX_STACK_LINE(209)
		this->container->set_rotation((int)0);
		HX_STACK_LINE(210)
		::core::build::game::managers::Universe_obj::assets->playsfx((int)1);
		HX_STACK_LINE(211)
		this->updatelevelvalues();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageManager_obj,reset,(void))

Void StageManager_obj::update( ){
{
		HX_STACK_PUSH("StageManager::update","core/build/game/stage/StageManager.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(140)
		this->colourchanger->update();
		HX_STACK_LINE(142)
		if (((bool(!(this->pause)) && bool(!(this->hit))))){
			HX_STACK_LINE(143)
			Float speed = this->rotationdirection;		HX_STACK_VAR(speed,"speed");
			HX_STACK_LINE(144)
			if (((bool(!(this->hit)) && bool(!(this->pause))))){
				HX_STACK_LINE(144)
				++(this->rotatedirtimer);
				HX_STACK_LINE(145)
				if (((this->rotatedirtimer >= this->rotatedirdest))){
					HX_STACK_LINE(145)
					this->rotatedirtimer = (int)0;
					HX_STACK_LINE(145)
					this->rotatedirdest = ((int)200 + ::Std_obj::_int((::Math_obj::random() * (int)500)));
					HX_STACK_LINE(145)
					this->rotationdirection = -(this->rotationdirection);
				}
			}
			else{
				HX_STACK_LINE(146)
				this->rotationdirection = 1.75;
			}
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::flash::display::Sprite _g = this->container;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				_g->set_rotation((_g->get_rotation() + speed));
			}
		}
		else{
			HX_STACK_LINE(149)
			if (((bool(this->ingame) && bool(this->hit)))){
				HX_STACK_LINE(150)
				this->rotationdirection = (this->rotationdirection * .99);
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					::flash::display::Sprite _g = this->container;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(151)
					_g->set_rotation((_g->get_rotation() + this->rotationdirection));
				}
			}
		}
		HX_STACK_LINE(154)
		if (((bool(!(this->hit)) && bool(!(this->pause))))){
			HX_STACK_LINE(155)
			if (((this->hexagon->get_scaleX() > (int)2))){
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(156)
					_g->set_scaleX((_g->get_scaleX() - .25));
				}
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(157)
					_g->set_scaleY((_g->get_scaleY() - .25));
				}
				HX_STACK_LINE(158)
				return null();
			}
			else{
				HX_STACK_LINE(159)
				if (((this->hexagontimer <= (int)15))){
					HX_STACK_LINE(160)
					this->hexagon->set_scaleX((int)1);
					HX_STACK_LINE(161)
					this->hexagon->set_scaleY((int)1);
					HX_STACK_LINE(162)
					++(this->hexagontimer);
				}
			}
			HX_STACK_LINE(165)
			if (((this->hexagontimer >= (int)15))){
				HX_STACK_LINE(165)
				if (((this->hexagondir == (int)0))){
					HX_STACK_LINE(166)
					if (((this->hexagon->get_scaleX() < 1.25))){
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(167)
							_g->set_scaleX((_g->get_scaleX() + .1));
						}
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(167)
							_g->set_scaleY((_g->get_scaleY() + .1));
						}
					}
					else{
						HX_STACK_LINE(167)
						this->hexagondir = (int)1;
					}
				}
				else{
					HX_STACK_LINE(168)
					if (((this->hexagon->get_scaleX() > (int)1))){
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(169)
							_g->set_scaleX((_g->get_scaleX() - .1));
						}
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(169)
							_g->set_scaleY((_g->get_scaleY() - .1));
						}
					}
					else{
						HX_STACK_LINE(169)
						this->hexagondir = (int)0;
						HX_STACK_LINE(169)
						this->hexagon->set_scaleX((int)1);
						HX_STACK_LINE(169)
						this->hexagon->set_scaleY((int)1);
						HX_STACK_LINE(169)
						this->hexagontimer = (int)0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(172)
			if ((this->hit)){
				HX_STACK_LINE(173)
				++(this->hittimer);
				HX_STACK_LINE(174)
				::core::build::game::managers::Universe_obj::uimanager->pausetimer = true;
				HX_STACK_LINE(175)
				if (((this->hittimer >= (int)100))){
					HX_STACK_LINE(176)
					::core::build::game::managers::Universe_obj::player->set_visible(false);
					HX_STACK_LINE(177)
					if (((this->hexagon->get_scaleX() <= (int)5))){
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(178)
							_g->set_scaleX((_g->get_scaleX() + .25));
						}
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::flash::display::Shape _g = this->hexagon;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(179)
							_g->set_scaleY((_g->get_scaleY() + .25));
						}
					}
					else{
						HX_STACK_LINE(181)
						this->hittimer = (int)0;
						HX_STACK_LINE(182)
						this->pause = true;
						HX_STACK_LINE(183)
						this->hit = false;
						HX_STACK_LINE(184)
						this->ingame = false;
						HX_STACK_LINE(185)
						if (((this->rotationdirection <= (int)0))){
							HX_STACK_LINE(185)
							::core::build::game::managers::Universe_obj::player->closestrotationoffset = (this->container->get_rotation() - hx::Mod(this->container->get_rotation(),this->incrementangle));
						}
						else{
							HX_STACK_LINE(187)
							::core::build::game::managers::Universe_obj::player->closestrotationoffset = (this->container->get_rotation() + ((this->incrementangle - hx::Mod(this->container->get_rotation(),this->incrementangle))));
						}
						HX_STACK_LINE(190)
						::core::build::game::managers::Universe_obj::player->adjusting = true;
						HX_STACK_LINE(191)
						::core::build::game::managers::Universe_obj::obstaclemanager->removeobstacles();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageManager_obj,update,(void))

Void StageManager_obj::draw( hx::Null< bool >  __o_playsound){
bool playsound = __o_playsound.Default(true);
	HX_STACK_PUSH("StageManager::draw","core/build/game/stage/StageManager.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(playsound,"playsound");
{
		HX_STACK_LINE(82)
		if (((bool((this->mode == (int)4)) || bool((this->mode == (int)5))))){
			HX_STACK_LINE(82)
			this->sectors = (int)4;
		}
		else{
			HX_STACK_LINE(82)
			this->sectors = (int)6;
		}
		HX_STACK_LINE(83)
		this->colourchanger->rgbspeed = .01;
		HX_STACK_LINE(84)
		this->colourchanger->maxrgb = 2.5;
		HX_STACK_LINE(85)
		if (((this->mode >= (int)4))){
			HX_STACK_LINE(85)
			this->colourchanger->rgbspeed = .05;
		}
		else{
			HX_STACK_LINE(85)
			if (((this->mode == (int)0))){
				HX_STACK_LINE(85)
				this->colourchanger->maxrgb = 2.8;
				HX_STACK_LINE(85)
				this->colourchanger->rgbspeed = .025;
			}
		}
		HX_STACK_LINE(86)
		Float tempincrement = ((Float((Float((Float((int)360) / Float(this->sectors))) / Float((int)2))) / Float(((Float((int)180) / Float(::Math_obj::PI))))) * (int)2);		HX_STACK_VAR(tempincrement,"tempincrement");
		HX_STACK_LINE(88)
		this->midx = ::Std_obj::_int((Float(this->rect->width) / Float((int)2)));
		HX_STACK_LINE(89)
		this->midy = ::Std_obj::_int((Float(this->rect->height) / Float((int)2)));
		HX_STACK_LINE(90)
		Float angle = tempincrement;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(92)
		if ((playsound)){
			HX_STACK_LINE(93)
			::core::build::game::managers::Universe_obj::assets->playsound(::core::build::game::managers::Universe_obj::player->rotationindex,null());
			HX_STACK_LINE(94)
			::core::build::game::managers::Universe_obj::assets->soundtransform->volume = .5;
			HX_STACK_LINE(95)
			::core::build::game::managers::Universe_obj::assets->soundchannel->set_soundTransform(::core::build::game::managers::Universe_obj::assets->soundtransform);
		}
		HX_STACK_LINE(98)
		::flash::display::Shape graphics = ::flash::display::Shape_obj::__new();		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(99)
		this->hexagon->get_graphics()->clear();
		HX_STACK_LINE(100)
		this->hexagon->get_graphics()->lineStyle((int)1,(int)3026478,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(101)
		this->hexagon->get_graphics()->beginFill((int)6645093,null());
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->sectors;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while(((_g1 < _g))){
				HX_STACK_LINE(102)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(103)
				int colour = (int)0;		HX_STACK_VAR(colour,"colour");
				HX_STACK_LINE(104)
				if (((this->mode == (int)0))){
					HX_STACK_LINE(104)
					colour = (int)7237230;
					HX_STACK_LINE(104)
					if (((hx::Mod(i,(int)2) == (int)0))){
						HX_STACK_LINE(104)
						colour = (int)3026478;
					}
				}
				else{
					HX_STACK_LINE(105)
					if (((bool((this->mode == (int)1)) || bool((this->mode == (int)4))))){
						HX_STACK_LINE(105)
						colour = (int)14606046;
						HX_STACK_LINE(105)
						if (((hx::Mod(i,(int)2) == (int)0))){
							HX_STACK_LINE(105)
							colour = (int)11908533;
						}
					}
					else{
						HX_STACK_LINE(106)
						if (((this->mode == (int)2))){
							HX_STACK_LINE(106)
							colour = (int)11408404;
							HX_STACK_LINE(106)
							if (((hx::Mod(i,(int)2) == (int)0))){
								HX_STACK_LINE(106)
								colour = (int)5965832;
							}
						}
						else{
							HX_STACK_LINE(107)
							if (((this->mode == (int)3))){
								HX_STACK_LINE(107)
								colour = (int)4857499;
								HX_STACK_LINE(107)
								if (((hx::Mod(i,(int)2) == (int)0))){
									HX_STACK_LINE(107)
									colour = (int)2361432;
								}
							}
							else{
								HX_STACK_LINE(108)
								if (((this->mode == (int)5))){
									HX_STACK_LINE(108)
									colour = (int)0;
									HX_STACK_LINE(108)
									if (((hx::Mod(i,(int)2) == (int)0))){
										HX_STACK_LINE(108)
										colour = (int)0;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(109)
				graphics->get_graphics()->lineStyle((int)1,colour,null(),null(),null(),null(),null(),null());
				HX_STACK_LINE(110)
				graphics->get_graphics()->beginFill(colour,null());
				HX_STACK_LINE(111)
				graphics->get_graphics()->moveTo(this->midx,this->midy);
				HX_STACK_LINE(112)
				graphics->get_graphics()->lineTo((this->midx + (::Math_obj::cos(angle) * ((this->midx * 2.8)))),(this->midy + (::Math_obj::sin(angle) * ((this->midy * 2.8)))));
				HX_STACK_LINE(113)
				hx::AddEq(angle,tempincrement);
				HX_STACK_LINE(114)
				graphics->get_graphics()->lineStyle((int)1,colour,null(),null(),null(),null(),null(),null());
				HX_STACK_LINE(115)
				graphics->get_graphics()->lineTo((this->midx + (::Math_obj::cos(angle) * ((this->midx * 2.8)))),(this->midy + (::Math_obj::sin(angle) * ((this->midy * 2.8)))));
				HX_STACK_LINE(116)
				graphics->get_graphics()->lineTo(this->midx,this->midy);
				HX_STACK_LINE(117)
				graphics->get_graphics()->endFill();
				HX_STACK_LINE(119)
				if (((i == (int)0))){
					HX_STACK_LINE(120)
					hx::SubEq(angle,tempincrement);
					HX_STACK_LINE(121)
					this->hexagon->get_graphics()->moveTo((::Math_obj::cos(angle) * (int)25),(::Math_obj::sin(angle) * (int)25));
					HX_STACK_LINE(122)
					hx::AddEq(angle,tempincrement);
				}
				HX_STACK_LINE(124)
				this->hexagon->get_graphics()->lineTo((::Math_obj::cos(angle) * (int)25),(::Math_obj::sin(angle) * (int)25));
			}
		}
		HX_STACK_LINE(126)
		this->hexagon->get_graphics()->endFill();
		HX_STACK_LINE(127)
		this->hexagon->set_scaleX((int)5);
		HX_STACK_LINE(128)
		this->hexagon->set_scaleY((int)5);
		HX_STACK_LINE(129)
		this->canvasdata->fillRect(this->rect,(int)0);
		HX_STACK_LINE(130)
		this->canvasdata->draw(graphics,null(),null(),null(),null(),null());
		HX_STACK_LINE(132)
		graphics->get_graphics()->clear();
		HX_STACK_LINE(133)
		this->canvas->set_x(-(::Std_obj::_int((Float(this->rect->width) / Float((int)2)))));
		HX_STACK_LINE(134)
		this->canvas->set_y(-(::Std_obj::_int((Float(this->rect->height) / Float((int)2)))));
		HX_STACK_LINE(135)
		this->container->set_x((Float(::core::build::game::managers::Universe_obj::stage->get_stageWidth()) / Float((int)2)));
		HX_STACK_LINE(136)
		this->container->set_y((Float(::core::build::game::managers::Universe_obj::stage->get_stageHeight()) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StageManager_obj,draw,(void))

Void StageManager_obj::create( ){
{
		HX_STACK_PUSH("StageManager::create","core/build/game/stage/StageManager.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(61)
		this->canvasdata = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->rect->width),::Std_obj::_int(this->rect->height),true,(int)0,null());
		HX_STACK_LINE(62)
		this->canvas = ::flash::display::Bitmap_obj::__new(this->canvasdata,null(),null());
		HX_STACK_LINE(63)
		::core::build::game::managers::Universe_obj::stage->addChild(this->container);
		HX_STACK_LINE(64)
		this->container->addChild(this->canvas);
		HX_STACK_LINE(65)
		this->increment = ((Float((Float((Float((int)360) / Float(this->sectors))) / Float((int)2))) / Float(((Float((int)180) / Float(::Math_obj::PI))))) * (int)2);
		HX_STACK_LINE(66)
		this->incrementangle = ::Math_obj::round((this->increment * ((Float((int)180) / Float(::Math_obj::PI)))));
		HX_STACK_LINE(67)
		::core::build::game::managers::Universe_obj::player->angle = this->incrementangle;
		HX_STACK_LINE(68)
		this->colourchanger = ::core::build::game::tools::ColourChanger_obj::__new(this->container,.01,2.5);
		HX_STACK_LINE(70)
		this->hexagon = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(71)
		::core::build::game::managers::Universe_obj::stage->addChild(this->hexagon);
		HX_STACK_LINE(72)
		this->container->addChild(this->hexagon);
		HX_STACK_LINE(73)
		this->draw(null());
		HX_STACK_LINE(74)
		this->hit = true;
		HX_STACK_LINE(75)
		this->hittimer = (int)0;
		HX_STACK_LINE(76)
		this->hexagontimer = (int)1;
		HX_STACK_LINE(77)
		this->hexagondir = (int)0;
		HX_STACK_LINE(78)
		if (((this->gamemode == (int)1))){
			HX_STACK_LINE(78)
			::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)20;
		}
		else{
			HX_STACK_LINE(78)
			::core::build::game::managers::Universe_obj::obstaclemanager->obstaclerate = (int)40;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageManager_obj,create,(void))


StageManager_obj::StageManager_obj()
{
}

void StageManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StageManager);
	HX_MARK_MEMBER_NAME(hexagondir,"hexagondir");
	HX_MARK_MEMBER_NAME(hexagontimer,"hexagontimer");
	HX_MARK_MEMBER_NAME(rotatedirdest,"rotatedirdest");
	HX_MARK_MEMBER_NAME(rotatedirtimer,"rotatedirtimer");
	HX_MARK_MEMBER_NAME(rotationdirection,"rotationdirection");
	HX_MARK_MEMBER_NAME(ingame,"ingame");
	HX_MARK_MEMBER_NAME(gamemode,"gamemode");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(midy,"midy");
	HX_MARK_MEMBER_NAME(midx,"midx");
	HX_MARK_MEMBER_NAME(incrementangle,"incrementangle");
	HX_MARK_MEMBER_NAME(increment,"increment");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(sectors,"sectors");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(hittimer,"hittimer");
	HX_MARK_MEMBER_NAME(hit,"hit");
	HX_MARK_MEMBER_NAME(colourchanger,"colourchanger");
	HX_MARK_MEMBER_NAME(hexagon,"hexagon");
	HX_MARK_MEMBER_NAME(canvasdata,"canvasdata");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(container,"container");
	HX_MARK_END_CLASS();
}

void StageManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hexagondir,"hexagondir");
	HX_VISIT_MEMBER_NAME(hexagontimer,"hexagontimer");
	HX_VISIT_MEMBER_NAME(rotatedirdest,"rotatedirdest");
	HX_VISIT_MEMBER_NAME(rotatedirtimer,"rotatedirtimer");
	HX_VISIT_MEMBER_NAME(rotationdirection,"rotationdirection");
	HX_VISIT_MEMBER_NAME(ingame,"ingame");
	HX_VISIT_MEMBER_NAME(gamemode,"gamemode");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(midy,"midy");
	HX_VISIT_MEMBER_NAME(midx,"midx");
	HX_VISIT_MEMBER_NAME(incrementangle,"incrementangle");
	HX_VISIT_MEMBER_NAME(increment,"increment");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(sectors,"sectors");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(hittimer,"hittimer");
	HX_VISIT_MEMBER_NAME(hit,"hit");
	HX_VISIT_MEMBER_NAME(colourchanger,"colourchanger");
	HX_VISIT_MEMBER_NAME(hexagon,"hexagon");
	HX_VISIT_MEMBER_NAME(canvasdata,"canvasdata");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(container,"container");
}

Dynamic StageManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"midy") ) { return midy; }
		if (HX_FIELD_EQ(inName,"midx") ) { return midx; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"ingame") ) { return ingame; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sectors") ) { return sectors; }
		if (HX_FIELD_EQ(inName,"hexagon") ) { return hexagon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamemode") ) { return gamemode; }
		if (HX_FIELD_EQ(inName,"hittimer") ) { return hittimer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return increment; }
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hexagondir") ) { return hexagondir; }
		if (HX_FIELD_EQ(inName,"canvasdata") ) { return canvasdata; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hexagontimer") ) { return hexagontimer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotatedirdest") ) { return rotatedirdest; }
		if (HX_FIELD_EQ(inName,"colourchanger") ) { return colourchanger; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondschanged") ) { return secondschanged_dyn(); }
		if (HX_FIELD_EQ(inName,"rotatedirtimer") ) { return rotatedirtimer; }
		if (HX_FIELD_EQ(inName,"incrementangle") ) { return incrementangle; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updatelevelvalues") ) { return updatelevelvalues_dyn(); }
		if (HX_FIELD_EQ(inName,"rotationdirection") ) { return rotationdirection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StageManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { hit=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midy") ) { midy=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midx") ) { midx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ingame") ) { ingame=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sectors") ) { sectors=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hexagon") ) { hexagon=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamemode") ) { gamemode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hittimer") ) { hittimer=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { increment=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hexagondir") ) { hexagondir=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvasdata") ) { canvasdata=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hexagontimer") ) { hexagontimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotatedirdest") ) { rotatedirdest=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colourchanger") ) { colourchanger=inValue.Cast< ::core::build::game::tools::ColourChanger >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotatedirtimer") ) { rotatedirtimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"incrementangle") ) { incrementangle=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rotationdirection") ) { rotationdirection=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StageManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hexagondir"));
	outFields->push(HX_CSTRING("hexagontimer"));
	outFields->push(HX_CSTRING("rotatedirdest"));
	outFields->push(HX_CSTRING("rotatedirtimer"));
	outFields->push(HX_CSTRING("rotationdirection"));
	outFields->push(HX_CSTRING("ingame"));
	outFields->push(HX_CSTRING("gamemode"));
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("midy"));
	outFields->push(HX_CSTRING("midx"));
	outFields->push(HX_CSTRING("incrementangle"));
	outFields->push(HX_CSTRING("increment"));
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("sectors"));
	outFields->push(HX_CSTRING("pause"));
	outFields->push(HX_CSTRING("hittimer"));
	outFields->push(HX_CSTRING("hit"));
	outFields->push(HX_CSTRING("colourchanger"));
	outFields->push(HX_CSTRING("hexagon"));
	outFields->push(HX_CSTRING("canvasdata"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("container"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("secondschanged"),
	HX_CSTRING("updatelevelvalues"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("create"),
	HX_CSTRING("hexagondir"),
	HX_CSTRING("hexagontimer"),
	HX_CSTRING("rotatedirdest"),
	HX_CSTRING("rotatedirtimer"),
	HX_CSTRING("rotationdirection"),
	HX_CSTRING("ingame"),
	HX_CSTRING("gamemode"),
	HX_CSTRING("mode"),
	HX_CSTRING("midy"),
	HX_CSTRING("midx"),
	HX_CSTRING("incrementangle"),
	HX_CSTRING("increment"),
	HX_CSTRING("point"),
	HX_CSTRING("rect"),
	HX_CSTRING("sectors"),
	HX_CSTRING("pause"),
	HX_CSTRING("hittimer"),
	HX_CSTRING("hit"),
	HX_CSTRING("colourchanger"),
	HX_CSTRING("hexagon"),
	HX_CSTRING("canvasdata"),
	HX_CSTRING("canvas"),
	HX_CSTRING("container"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageManager_obj::__mClass,"__mClass");
};

Class StageManager_obj::__mClass;

void StageManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.stage.StageManager"), hx::TCanCast< StageManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StageManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace stage
