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
#ifndef INCLUDED_core_build_game_stage_StageManager
#include <core/build/game/stage/StageManager.h>
#endif
#ifndef INCLUDED_core_build_game_tools_ColourChanger
#include <core/build/game/tools/ColourChanger.h>
#endif
#ifndef INCLUDED_core_build_game_ui_EventButton
#include <core/build/game/ui/EventButton.h>
#endif
#ifndef INCLUDED_core_build_game_ui_UIManager
#include <core/build/game/ui/UIManager.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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

Void UIManager_obj::__construct()
{
HX_STACK_PUSH("UIManager::new","core/build/game/ui/UIManager.hx",18);
{
	HX_STACK_LINE(40)
	this->minutestext = HX_CSTRING("");
	HX_STACK_LINE(39)
	this->secondstext = HX_CSTRING("");
	HX_STACK_LINE(38)
	this->mstext = HX_CSTRING("");
	HX_STACK_LINE(37)
	this->pausetimer = true;
	HX_STACK_LINE(36)
	this->minutes = (int)0;
	HX_STACK_LINE(35)
	this->seconds = (int)0;
	HX_STACK_LINE(34)
	this->ms = (int)0;
	HX_STACK_LINE(30)
	this->created = false;
	HX_STACK_LINE(29)
	this->rngmode = false;
	HX_STACK_LINE(25)
	this->index = (int)0;
	HX_STACK_LINE(43)
	this->difficultymodes = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("Beginner")).Add(HX_CSTRING("Novice")).Add(HX_CSTRING("Hard")).Add(HX_CSTRING("Really hard")).Add(HX_CSTRING("Impossible")).Add(HX_CSTRING("Impossible For Real"))));
	HX_STACK_LINE(44)
	this->container = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(45)
	this->highscores = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(46)
	this->currentscore = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		while(((_g < (int)6))){
			HX_STACK_LINE(47)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(48)
			Array< ::String > score = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(score,"score");
			HX_STACK_LINE(49)
			score[(int)0] = HX_CSTRING("00");
			HX_STACK_LINE(50)
			score[(int)1] = HX_CSTRING("00");
			HX_STACK_LINE(51)
			score[(int)2] = HX_CSTRING("00");
			HX_STACK_LINE(52)
			this->highscores[i] = score;
		}
	}
	HX_STACK_LINE(54)
	this->createtimer();
}
;
	return null();
}

UIManager_obj::~UIManager_obj() { }

Dynamic UIManager_obj::__CreateEmpty() { return  new UIManager_obj; }
hx::ObjectPtr< UIManager_obj > UIManager_obj::__new()
{  hx::ObjectPtr< UIManager_obj > result = new UIManager_obj();
	result->__construct();
	return result;}

Dynamic UIManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIManager_obj > result = new UIManager_obj();
	result->__construct();
	return result;}

Void UIManager_obj::updatetimertext( ){
{
		HX_STACK_PUSH("UIManager::updatetimertext","core/build/game/ui/UIManager.hx",173);
		HX_STACK_THIS(this);
		HX_STACK_LINE(174)
		if ((!(this->pausetimer))){
			HX_STACK_LINE(174)
			++(this->ms);
		}
		HX_STACK_LINE(175)
		if (((this->ms >= (int)60))){
			HX_STACK_LINE(175)
			this->ms = (int)0;
			HX_STACK_LINE(175)
			++(this->seconds);
			HX_STACK_LINE(176)
			if (((this->seconds >= (int)60))){
				HX_STACK_LINE(176)
				this->seconds = (int)0;
				HX_STACK_LINE(176)
				++(this->minutes);
			}
			HX_STACK_LINE(176)
			::core::build::game::managers::Universe_obj::stagemanager->secondschanged();
		}
		HX_STACK_LINE(177)
		this->mstext = ::Std_obj::string(::Std_obj::_int((this->ms * ((Float((int)100) / Float((int)60))))));
		HX_STACK_LINE(177)
		if (((this->mstext.length == (int)1))){
			HX_STACK_LINE(177)
			this->mstext = (HX_CSTRING("0") + this->mstext);
		}
		HX_STACK_LINE(178)
		this->secondstext = ::Std_obj::string(this->seconds);
		HX_STACK_LINE(178)
		if (((this->secondstext.length == (int)1))){
			HX_STACK_LINE(178)
			this->secondstext = (HX_CSTRING("0") + this->secondstext);
		}
		HX_STACK_LINE(179)
		this->minutestext = ::Std_obj::string(this->minutes);
		HX_STACK_LINE(179)
		if (((this->minutestext.length == (int)1))){
			HX_STACK_LINE(179)
			this->minutestext = (HX_CSTRING("0") + this->minutestext);
		}
		HX_STACK_LINE(180)
		this->timertext->set_text(((((this->minutestext + HX_CSTRING(":")) + this->secondstext) + HX_CSTRING(":")) + this->mstext));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,updatetimertext,(void))

Void UIManager_obj::turn( ){
{
		HX_STACK_PUSH("UIManager::turn","core/build/game/ui/UIManager.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		if ((::core::build::game::managers::Universe_obj::stagemanager->pause)){
			HX_STACK_LINE(164)
			::core::build::game::managers::Universe_obj::assets->playsfx((int)3);
			HX_STACK_LINE(165)
			this->index = ::core::build::game::managers::Universe_obj::player->rotationindex;
			HX_STACK_LINE(166)
			if (((this->index >= (int)6))){
				HX_STACK_LINE(166)
				this->index = (int)0;
				HX_STACK_LINE(166)
				::core::build::game::managers::Universe_obj::player->rotationindex = (int)0;
			}
			else{
				HX_STACK_LINE(166)
				if (((this->index < (int)0))){
					HX_STACK_LINE(166)
					this->index = (int)5;
					HX_STACK_LINE(166)
					::core::build::game::managers::Universe_obj::player->rotationindex = (int)5;
				}
			}
			HX_STACK_LINE(167)
			this->updateblocktext();
			HX_STACK_LINE(168)
			::core::build::game::managers::Universe_obj::stagemanager->mode = this->index;
			HX_STACK_LINE(169)
			::core::build::game::managers::Universe_obj::stagemanager->draw(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,turn,(void))

Void UIManager_obj::updateblocktext( ){
{
		HX_STACK_PUSH("UIManager::updateblocktext","core/build/game/ui/UIManager.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		::String time = ((((this->highscores->__get(this->index).StaticCast< Array< ::String > >()->__get((int)2) + HX_CSTRING(":")) + this->highscores->__get(this->index).StaticCast< Array< ::String > >()->__get((int)1)) + HX_CSTRING(":")) + this->highscores->__get(this->index).StaticCast< Array< ::String > >()->__get((int)0));		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(157)
		this->blocktext->set_htmlText((((HX_CSTRING("<font color='#FFFFFF'>Difficulty: </font><font color='#50a7f0'>") + this->difficultymodes->__get(this->index)) + HX_CSTRING("</font><br>Best time: ")) + time));
		HX_STACK_LINE(158)
		if (((bool((this->index >= (int)1)) && bool((this->index <= (int)6))))){
			HX_STACK_LINE(158)
			::flash::text::TextField _g = this->blocktext;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			_g->set_htmlText((_g->get_htmlText() + HX_CSTRING("<br><font size='15'>Random obstacles: YES</font>")));
		}
		else{
			HX_STACK_LINE(159)
			::flash::text::TextField _g = this->blocktext;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(159)
			_g->set_htmlText((_g->get_htmlText() + HX_CSTRING("<br><font size='15'>Random obstacles: NO</font>")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,updateblocktext,(void))

Void UIManager_obj::startgame( ){
{
		HX_STACK_PUSH("UIManager::startgame","core/build/game/ui/UIManager.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_LINE(151)
		if ((::core::build::game::managers::Universe_obj::stagemanager->pause)){
			HX_STACK_LINE(152)
			this->pausetimer = false;
			HX_STACK_LINE(152)
			this->ms = (int)0;
			HX_STACK_LINE(152)
			this->seconds = (int)0;
			HX_STACK_LINE(152)
			this->minutes = (int)0;
			HX_STACK_LINE(152)
			::core::build::game::managers::Universe_obj::stagemanager->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,startgame,(void))

Void UIManager_obj::removemenu( ){
{
		HX_STACK_PUSH("UIManager::removemenu","core/build/game/ui/UIManager.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_LINE(139)
		this->startbutton->remove();
		HX_STACK_LINE(140)
		this->container->removeChild(this->startbutton);
		HX_STACK_LINE(141)
		this->startbutton = null();
		HX_STACK_LINE(142)
		this->blackblock->get_graphics()->clear();
		HX_STACK_LINE(143)
		this->container->removeChild(this->blackblock);
		HX_STACK_LINE(144)
		this->blackblock = null();
		HX_STACK_LINE(145)
		this->container->removeChild(this->blocktext);
		HX_STACK_LINE(146)
		this->blocktext = null();
		HX_STACK_LINE(147)
		this->created = false;
		HX_STACK_LINE(148)
		::core::build::game::managers::Universe_obj::stage->removeChild(this->container);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,removemenu,(void))

Void UIManager_obj::update( ){
{
		HX_STACK_PUSH("UIManager::update","core/build/game/ui/UIManager.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_LINE(128)
		if (((this->colourchanger != null()))){
			HX_STACK_LINE(129)
			this->colourchanger->update();
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				::flash::display::Sprite _g = this->container;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(130)
				_g->set_x((_g->get_x() - (Float(this->container->get_x()) / Float((int)10))));
			}
		}
		HX_STACK_LINE(132)
		::core::build::game::managers::Universe_obj::stage->setChildIndex(this->timerbackground,(::core::build::game::managers::Universe_obj::stage->get_numChildren() - (int)1));
		HX_STACK_LINE(133)
		::core::build::game::managers::Universe_obj::stage->setChildIndex(this->timertext,(::core::build::game::managers::Universe_obj::stage->get_numChildren() - (int)1));
		HX_STACK_LINE(135)
		this->updatetimertext();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,update,(void))

Void UIManager_obj::createtimer( ){
{
		HX_STACK_PUSH("UIManager::createtimer","core/build/game/ui/UIManager.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		this->timerbackground = ::flash::display::Bitmap_obj::__new(::core::build::game::managers::Universe_obj::assets->timerbackground,null(),null());
		HX_STACK_LINE(106)
		::core::build::game::managers::Universe_obj::stage->addChild(this->timerbackground);
		HX_STACK_LINE(107)
		this->timerbackground->set_x((::core::build::game::managers::Universe_obj::stage->get_stageWidth() - this->timerbackground->get_width()));
		HX_STACK_LINE(108)
		this->timerbackground->set_y((int)0);
		HX_STACK_LINE(110)
		this->timertext = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(111)
		this->timertext->set_selectable(false);
		HX_STACK_LINE(112)
		this->timertext->set_width(this->timerbackground->get_width());
		HX_STACK_LINE(113)
		this->timertext->set_height(this->timerbackground->get_height());
		HX_STACK_LINE(114)
		::flash::text::TextFormat textformat = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(textformat,"textformat");
		HX_STACK_LINE(115)
		textformat->font = ::core::build::game::managers::Universe_obj::assets->kenpixelfont->fontName;
		HX_STACK_LINE(116)
		textformat->align = ::flash::text::TextFormatAlign_obj::RIGHT;
		HX_STACK_LINE(117)
		textformat->size = (int)20;
		HX_STACK_LINE(118)
		this->timertext->set_embedFonts(true);
		HX_STACK_LINE(119)
		this->timertext->set_defaultTextFormat(textformat);
		HX_STACK_LINE(120)
		this->timertext->set_x(((::core::build::game::managers::Universe_obj::stage->get_stageWidth() - this->timertext->get_width()) - (int)5));
		HX_STACK_LINE(121)
		this->timertext->set_y((int)2);
		HX_STACK_LINE(122)
		this->timertext->set_textColor((int)16777215);
		HX_STACK_LINE(123)
		this->updatetimertext();
		HX_STACK_LINE(124)
		::core::build::game::managers::Universe_obj::stage->addChild(this->timertext);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,createtimer,(void))

Void UIManager_obj::createmenu( ){
{
		HX_STACK_PUSH("UIManager::createmenu","core/build/game/ui/UIManager.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(57)
		if ((!(this->created))){
			HX_STACK_LINE(59)
			if (((bool(((::Std_obj::parseInt(this->highscores->__get(this->index).StaticCast< Array< ::String > >()->__get((int)0)) + (::Std_obj::parseInt(this->highscores->__get(this->index).StaticCast< Array< ::String > >()->__get((int)1)) * (int)60)) < ((this->seconds * (int)60) + this->ms))) || bool((::Std_obj::parseInt(this->highscores->__get(this->index).StaticCast< Array< ::String > >()->__get((int)2)) < this->minutes))))){
				HX_STACK_LINE(60)
				this->highscores->__get(this->index).StaticCast< Array< ::String > >()[(int)0] = this->mstext;
				HX_STACK_LINE(61)
				this->highscores->__get(this->index).StaticCast< Array< ::String > >()[(int)1] = this->secondstext;
				HX_STACK_LINE(62)
				this->highscores->__get(this->index).StaticCast< Array< ::String > >()[(int)2] = this->minutestext;
			}
			HX_STACK_LINE(65)
			this->startbutton = ::core::build::game::ui::EventButton_obj::__new(::core::build::game::managers::Universe_obj::assets->button,::core::build::game::managers::Universe_obj::assets->buttonclicked,HX_CSTRING("Start game"),(int)20,this->startgame_dyn());
			HX_STACK_LINE(66)
			this->startbutton->set_x(((Float(::core::build::game::managers::Universe_obj::stage->get_stageWidth()) / Float((int)2)) - (Float(this->startbutton->get_width()) / Float((int)2))));
			HX_STACK_LINE(67)
			this->startbutton->set_y((::core::build::game::managers::Universe_obj::stage->get_stageHeight() - (Float(::core::build::game::managers::Universe_obj::stage->get_stageHeight()) / Float((int)4))));
			HX_STACK_LINE(68)
			this->container->addChild(this->startbutton);
			HX_STACK_LINE(69)
			this->colourchanger = ::core::build::game::tools::ColourChanger_obj::__new(this->startbutton,.005,1.4);
			HX_STACK_LINE(71)
			this->blackblock = ::flash::display::Shape_obj::__new();
			HX_STACK_LINE(72)
			this->blackblock->get_graphics()->lineStyle((int)1,(int)0,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(73)
			this->blackblock->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(74)
			this->blackblock->get_graphics()->drawRect(-(::core::build::game::managers::Universe_obj::stage->get_stageWidth()),((Float(::core::build::game::managers::Universe_obj::stage->get_stageHeight()) / Float((int)2)) - (int)250),(::core::build::game::managers::Universe_obj::stage->get_stageWidth() * (int)2),(int)200);
			HX_STACK_LINE(75)
			this->blackblock->set_alpha(.8);
			HX_STACK_LINE(76)
			this->container->addChild(this->blackblock);
			HX_STACK_LINE(78)
			this->blocktext = ::flash::text::TextField_obj::__new();
			HX_STACK_LINE(79)
			this->blocktext->set_multiline(true);
			HX_STACK_LINE(80)
			this->blocktext->set_wordWrap(true);
			HX_STACK_LINE(81)
			this->blocktext->set_selectable(false);
			HX_STACK_LINE(82)
			this->blocktext->set_width(::core::build::game::managers::Universe_obj::stage->get_stageWidth());
			HX_STACK_LINE(83)
			this->blocktext->set_height((int)100);
			HX_STACK_LINE(84)
			::flash::text::TextFormat textformat = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(textformat,"textformat");
			HX_STACK_LINE(85)
			textformat->font = ::core::build::game::managers::Universe_obj::assets->kenpixelfont->fontName;
			HX_STACK_LINE(86)
			textformat->align = ::flash::text::TextFormatAlign_obj::CENTER;
			HX_STACK_LINE(87)
			textformat->size = (int)25;
			HX_STACK_LINE(88)
			this->blocktext->set_embedFonts(true);
			HX_STACK_LINE(89)
			this->blocktext->set_defaultTextFormat(textformat);
			HX_STACK_LINE(90)
			this->blocktext->set_x((int)0);
			HX_STACK_LINE(91)
			this->blocktext->set_y(((Float(::core::build::game::managers::Universe_obj::stage->get_stageHeight()) / Float((int)2)) - (int)200));
			HX_STACK_LINE(92)
			this->updateblocktext();
			HX_STACK_LINE(93)
			this->blocktext->set_textColor((int)16777215);
			HX_STACK_LINE(94)
			this->container->addChild(this->blocktext);
			HX_STACK_LINE(96)
			::core::build::game::managers::Universe_obj::stage->addChild(this->container);
			HX_STACK_LINE(97)
			this->container->set_x(::core::build::game::managers::Universe_obj::stage->get_stageWidth());
			HX_STACK_LINE(99)
			this->turn();
			HX_STACK_LINE(100)
			this->created = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,createmenu,(void))


UIManager_obj::UIManager_obj()
{
}

void UIManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIManager);
	HX_MARK_MEMBER_NAME(minutestext,"minutestext");
	HX_MARK_MEMBER_NAME(secondstext,"secondstext");
	HX_MARK_MEMBER_NAME(mstext,"mstext");
	HX_MARK_MEMBER_NAME(pausetimer,"pausetimer");
	HX_MARK_MEMBER_NAME(minutes,"minutes");
	HX_MARK_MEMBER_NAME(seconds,"seconds");
	HX_MARK_MEMBER_NAME(ms,"ms");
	HX_MARK_MEMBER_NAME(timertext,"timertext");
	HX_MARK_MEMBER_NAME(timerbackground,"timerbackground");
	HX_MARK_MEMBER_NAME(container,"container");
	HX_MARK_MEMBER_NAME(created,"created");
	HX_MARK_MEMBER_NAME(rngmode,"rngmode");
	HX_MARK_MEMBER_NAME(currentscore,"currentscore");
	HX_MARK_MEMBER_NAME(highscores,"highscores");
	HX_MARK_MEMBER_NAME(difficultymodes,"difficultymodes");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(blocktext,"blocktext");
	HX_MARK_MEMBER_NAME(blackblock,"blackblock");
	HX_MARK_MEMBER_NAME(colourchanger,"colourchanger");
	HX_MARK_MEMBER_NAME(startbutton,"startbutton");
	HX_MARK_END_CLASS();
}

void UIManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minutestext,"minutestext");
	HX_VISIT_MEMBER_NAME(secondstext,"secondstext");
	HX_VISIT_MEMBER_NAME(mstext,"mstext");
	HX_VISIT_MEMBER_NAME(pausetimer,"pausetimer");
	HX_VISIT_MEMBER_NAME(minutes,"minutes");
	HX_VISIT_MEMBER_NAME(seconds,"seconds");
	HX_VISIT_MEMBER_NAME(ms,"ms");
	HX_VISIT_MEMBER_NAME(timertext,"timertext");
	HX_VISIT_MEMBER_NAME(timerbackground,"timerbackground");
	HX_VISIT_MEMBER_NAME(container,"container");
	HX_VISIT_MEMBER_NAME(created,"created");
	HX_VISIT_MEMBER_NAME(rngmode,"rngmode");
	HX_VISIT_MEMBER_NAME(currentscore,"currentscore");
	HX_VISIT_MEMBER_NAME(highscores,"highscores");
	HX_VISIT_MEMBER_NAME(difficultymodes,"difficultymodes");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(blocktext,"blocktext");
	HX_VISIT_MEMBER_NAME(blackblock,"blackblock");
	HX_VISIT_MEMBER_NAME(colourchanger,"colourchanger");
	HX_VISIT_MEMBER_NAME(startbutton,"startbutton");
}

Dynamic UIManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { return ms; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"turn") ) { return turn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"mstext") ) { return mstext; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minutes") ) { return minutes; }
		if (HX_FIELD_EQ(inName,"seconds") ) { return seconds; }
		if (HX_FIELD_EQ(inName,"created") ) { return created; }
		if (HX_FIELD_EQ(inName,"rngmode") ) { return rngmode; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startgame") ) { return startgame_dyn(); }
		if (HX_FIELD_EQ(inName,"timertext") ) { return timertext; }
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		if (HX_FIELD_EQ(inName,"blocktext") ) { return blocktext; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removemenu") ) { return removemenu_dyn(); }
		if (HX_FIELD_EQ(inName,"createmenu") ) { return createmenu_dyn(); }
		if (HX_FIELD_EQ(inName,"pausetimer") ) { return pausetimer; }
		if (HX_FIELD_EQ(inName,"highscores") ) { return highscores; }
		if (HX_FIELD_EQ(inName,"blackblock") ) { return blackblock; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createtimer") ) { return createtimer_dyn(); }
		if (HX_FIELD_EQ(inName,"minutestext") ) { return minutestext; }
		if (HX_FIELD_EQ(inName,"secondstext") ) { return secondstext; }
		if (HX_FIELD_EQ(inName,"startbutton") ) { return startbutton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentscore") ) { return currentscore; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colourchanger") ) { return colourchanger; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatetimertext") ) { return updatetimertext_dyn(); }
		if (HX_FIELD_EQ(inName,"updateblocktext") ) { return updateblocktext_dyn(); }
		if (HX_FIELD_EQ(inName,"timerbackground") ) { return timerbackground; }
		if (HX_FIELD_EQ(inName,"difficultymodes") ) { return difficultymodes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { ms=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mstext") ) { mstext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minutes") ) { minutes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"seconds") ) { seconds=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"created") ) { created=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rngmode") ) { rngmode=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timertext") ) { timertext=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blocktext") ) { blocktext=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pausetimer") ) { pausetimer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"highscores") ) { highscores=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blackblock") ) { blackblock=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minutestext") ) { minutestext=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secondstext") ) { secondstext=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startbutton") ) { startbutton=inValue.Cast< ::core::build::game::ui::EventButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentscore") ) { currentscore=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colourchanger") ) { colourchanger=inValue.Cast< ::core::build::game::tools::ColourChanger >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"timerbackground") ) { timerbackground=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficultymodes") ) { difficultymodes=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("minutestext"));
	outFields->push(HX_CSTRING("secondstext"));
	outFields->push(HX_CSTRING("mstext"));
	outFields->push(HX_CSTRING("pausetimer"));
	outFields->push(HX_CSTRING("minutes"));
	outFields->push(HX_CSTRING("seconds"));
	outFields->push(HX_CSTRING("ms"));
	outFields->push(HX_CSTRING("timertext"));
	outFields->push(HX_CSTRING("timerbackground"));
	outFields->push(HX_CSTRING("container"));
	outFields->push(HX_CSTRING("created"));
	outFields->push(HX_CSTRING("rngmode"));
	outFields->push(HX_CSTRING("currentscore"));
	outFields->push(HX_CSTRING("highscores"));
	outFields->push(HX_CSTRING("difficultymodes"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("blocktext"));
	outFields->push(HX_CSTRING("blackblock"));
	outFields->push(HX_CSTRING("colourchanger"));
	outFields->push(HX_CSTRING("startbutton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updatetimertext"),
	HX_CSTRING("turn"),
	HX_CSTRING("updateblocktext"),
	HX_CSTRING("startgame"),
	HX_CSTRING("removemenu"),
	HX_CSTRING("update"),
	HX_CSTRING("createtimer"),
	HX_CSTRING("createmenu"),
	HX_CSTRING("minutestext"),
	HX_CSTRING("secondstext"),
	HX_CSTRING("mstext"),
	HX_CSTRING("pausetimer"),
	HX_CSTRING("minutes"),
	HX_CSTRING("seconds"),
	HX_CSTRING("ms"),
	HX_CSTRING("timertext"),
	HX_CSTRING("timerbackground"),
	HX_CSTRING("container"),
	HX_CSTRING("created"),
	HX_CSTRING("rngmode"),
	HX_CSTRING("currentscore"),
	HX_CSTRING("highscores"),
	HX_CSTRING("difficultymodes"),
	HX_CSTRING("index"),
	HX_CSTRING("blocktext"),
	HX_CSTRING("blackblock"),
	HX_CSTRING("colourchanger"),
	HX_CSTRING("startbutton"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIManager_obj::__mClass,"__mClass");
};

Class UIManager_obj::__mClass;

void UIManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.ui.UIManager"), hx::TCanCast< UIManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void UIManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace ui
