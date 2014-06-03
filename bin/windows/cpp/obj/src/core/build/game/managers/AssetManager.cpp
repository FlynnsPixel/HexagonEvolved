#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_build_game_managers_AssetManager
#include <core/build/game/managers/AssetManager.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace core{
namespace build{
namespace game{
namespace managers{

Void AssetManager_obj::__construct()
{
HX_STACK_PUSH("AssetManager::new","core/build/game/managers/AssetManager.hx",51);
{
	HX_STACK_LINE(52)
	this->button = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/textures/button.png"),null());
	HX_STACK_LINE(53)
	this->buttonclicked = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/textures/buttonclicked.png"),null());
	HX_STACK_LINE(54)
	this->timerbackground = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/textures/timerbackground.png"),null());
	HX_STACK_LINE(55)
	this->kenpixelfont = ::openfl::Assets_obj::getFont(HX_CSTRING("assets/textures/kenvector.ttf"),null());
	HX_STACK_LINE(57)
	this->soundtransform = ::flash::media::SoundTransform_obj::__new(null(),null());
	HX_STACK_LINE(58)
	this->juicyfruit = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sound/juicyfruit.ogg"),null());
	HX_STACK_LINE(59)
	this->hexagoncore = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sound/hexagoncore.ogg"),null());
	HX_STACK_LINE(60)
	this->alienate = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sound/alienate.ogg"),null());
	HX_STACK_LINE(61)
	this->normalise = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sound/normalise.ogg"),null());
	HX_STACK_LINE(62)
	this->chiptune = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sound/chiptune.ogg"),null());
	HX_STACK_LINE(63)
	this->disco = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sound/disco.ogg"),null());
	HX_STACK_LINE(65)
	this->musiclist = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(66)
	this->musiclist->__Field(HX_CSTRING("push"),true)(this->juicyfruit);
	HX_STACK_LINE(67)
	this->musiclist->__Field(HX_CSTRING("push"),true)(this->hexagoncore);
	HX_STACK_LINE(68)
	this->musiclist->__Field(HX_CSTRING("push"),true)(this->alienate);
	HX_STACK_LINE(69)
	this->musiclist->__Field(HX_CSTRING("push"),true)(this->normalise);
	HX_STACK_LINE(70)
	this->musiclist->__Field(HX_CSTRING("push"),true)(this->chiptune);
	HX_STACK_LINE(71)
	this->musiclist->__Field(HX_CSTRING("push"),true)(this->disco);
	HX_STACK_LINE(73)
	this->sfxtransform = ::flash::media::SoundTransform_obj::__new(null(),null());
	HX_STACK_LINE(74)
	this->explosion = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sfx/explosion.ogg"),null());
	HX_STACK_LINE(75)
	this->enterexplosion = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sfx/enterexplosion.ogg"),null());
	HX_STACK_LINE(76)
	this->select = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sfx/select.ogg"),null());
	HX_STACK_LINE(77)
	this->mouseover = ::openfl::Assets_obj::getSound(HX_CSTRING("assets/sfx/mouseover.ogg"),null());
	HX_STACK_LINE(79)
	this->sfxlist = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(80)
	this->sfxlist->__Field(HX_CSTRING("push"),true)(this->explosion);
	HX_STACK_LINE(81)
	this->sfxlist->__Field(HX_CSTRING("push"),true)(this->enterexplosion);
	HX_STACK_LINE(82)
	this->sfxlist->__Field(HX_CSTRING("push"),true)(this->select);
	HX_STACK_LINE(83)
	this->sfxlist->__Field(HX_CSTRING("push"),true)(this->mouseover);
}
;
	return null();
}

AssetManager_obj::~AssetManager_obj() { }

Dynamic AssetManager_obj::__CreateEmpty() { return  new AssetManager_obj; }
hx::ObjectPtr< AssetManager_obj > AssetManager_obj::__new()
{  hx::ObjectPtr< AssetManager_obj > result = new AssetManager_obj();
	result->__construct();
	return result;}

Dynamic AssetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetManager_obj > result = new AssetManager_obj();
	result->__construct();
	return result;}

Void AssetManager_obj::stopsfx( ){
{
		HX_STACK_PUSH("AssetManager::stopsfx","core/build/game/managers/AssetManager.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(112)
		if (((this->sfxchannel == null()))){
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(113)
		this->sfxchannel->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetManager_obj,stopsfx,(void))

Void AssetManager_obj::playsfx( int id){
{
		HX_STACK_PUSH("AssetManager::playsfx","core/build/game/managers/AssetManager.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_LINE(105)
		this->stopsfx();
		HX_STACK_LINE(106)
		this->sfxchannel = this->sfxlist->__get(id).StaticCast< ::flash::media::Sound >()->play((int)0,(int)0,this->sfxtransform);
		HX_STACK_LINE(107)
		this->sfxtransform->volume = (int)1;
		HX_STACK_LINE(108)
		this->sfxchannel->set_soundTransform(this->sfxtransform);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetManager_obj,playsfx,(void))

Void AssetManager_obj::stopsound( ){
{
		HX_STACK_PUSH("AssetManager::stopsound","core/build/game/managers/AssetManager.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		if (((this->soundchannel == null()))){
			HX_STACK_LINE(100)
			return null();
		}
		HX_STACK_LINE(101)
		this->soundchannel->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetManager_obj,stopsound,(void))

Void AssetManager_obj::playsound( int id,hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_PUSH("AssetManager::playsound","core/build/game/managers/AssetManager.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(force,"force");
{
		HX_STACK_LINE(86)
		if (((bool((id >= (int)0)) && bool((id <= (this->musiclist->__Field(HX_CSTRING("length"),true) - (int)1)))))){
			HX_STACK_LINE(87)
			if (((bool((this->currentlyplaying != this->musiclist->__get(id).StaticCast< ::flash::media::Sound >())) || bool(force)))){
				HX_STACK_LINE(89)
				this->stopsound();
				HX_STACK_LINE(90)
				int length = (int)131072;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(90)
				if (((id == (int)2))){
					HX_STACK_LINE(90)
					length = (int)65536;
				}
				HX_STACK_LINE(91)
				this->soundchannel = this->musiclist->__get(id).StaticCast< ::flash::media::Sound >()->play(::Std_obj::_int((::Math_obj::random() * length)),(int)99,this->soundtransform);
				HX_STACK_LINE(92)
				this->soundtransform->volume = (int)1;
				HX_STACK_LINE(93)
				this->soundchannel->set_soundTransform(this->soundtransform);
				HX_STACK_LINE(94)
				this->currentlyplaying = this->musiclist->__get(id).StaticCast< ::flash::media::Sound >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetManager_obj,playsound,(void))


AssetManager_obj::AssetManager_obj()
{
}

void AssetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetManager);
	HX_MARK_MEMBER_NAME(sfxtransform,"sfxtransform");
	HX_MARK_MEMBER_NAME(sfxchannel,"sfxchannel");
	HX_MARK_MEMBER_NAME(mouseover,"mouseover");
	HX_MARK_MEMBER_NAME(select,"select");
	HX_MARK_MEMBER_NAME(enterexplosion,"enterexplosion");
	HX_MARK_MEMBER_NAME(explosion,"explosion");
	HX_MARK_MEMBER_NAME(sfxlist,"sfxlist");
	HX_MARK_MEMBER_NAME(currentlyplaying,"currentlyplaying");
	HX_MARK_MEMBER_NAME(soundtransform,"soundtransform");
	HX_MARK_MEMBER_NAME(soundchannel,"soundchannel");
	HX_MARK_MEMBER_NAME(disco,"disco");
	HX_MARK_MEMBER_NAME(chiptune,"chiptune");
	HX_MARK_MEMBER_NAME(normalise,"normalise");
	HX_MARK_MEMBER_NAME(alienate,"alienate");
	HX_MARK_MEMBER_NAME(hexagoncore,"hexagoncore");
	HX_MARK_MEMBER_NAME(juicyfruit,"juicyfruit");
	HX_MARK_MEMBER_NAME(musiclist,"musiclist");
	HX_MARK_MEMBER_NAME(kenpixelfont,"kenpixelfont");
	HX_MARK_MEMBER_NAME(timerbackground,"timerbackground");
	HX_MARK_MEMBER_NAME(buttonclicked,"buttonclicked");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_END_CLASS();
}

void AssetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sfxtransform,"sfxtransform");
	HX_VISIT_MEMBER_NAME(sfxchannel,"sfxchannel");
	HX_VISIT_MEMBER_NAME(mouseover,"mouseover");
	HX_VISIT_MEMBER_NAME(select,"select");
	HX_VISIT_MEMBER_NAME(enterexplosion,"enterexplosion");
	HX_VISIT_MEMBER_NAME(explosion,"explosion");
	HX_VISIT_MEMBER_NAME(sfxlist,"sfxlist");
	HX_VISIT_MEMBER_NAME(currentlyplaying,"currentlyplaying");
	HX_VISIT_MEMBER_NAME(soundtransform,"soundtransform");
	HX_VISIT_MEMBER_NAME(soundchannel,"soundchannel");
	HX_VISIT_MEMBER_NAME(disco,"disco");
	HX_VISIT_MEMBER_NAME(chiptune,"chiptune");
	HX_VISIT_MEMBER_NAME(normalise,"normalise");
	HX_VISIT_MEMBER_NAME(alienate,"alienate");
	HX_VISIT_MEMBER_NAME(hexagoncore,"hexagoncore");
	HX_VISIT_MEMBER_NAME(juicyfruit,"juicyfruit");
	HX_VISIT_MEMBER_NAME(musiclist,"musiclist");
	HX_VISIT_MEMBER_NAME(kenpixelfont,"kenpixelfont");
	HX_VISIT_MEMBER_NAME(timerbackground,"timerbackground");
	HX_VISIT_MEMBER_NAME(buttonclicked,"buttonclicked");
	HX_VISIT_MEMBER_NAME(button,"button");
}

Dynamic AssetManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"disco") ) { return disco; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { return select; }
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopsfx") ) { return stopsfx_dyn(); }
		if (HX_FIELD_EQ(inName,"playsfx") ) { return playsfx_dyn(); }
		if (HX_FIELD_EQ(inName,"sfxlist") ) { return sfxlist; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"chiptune") ) { return chiptune; }
		if (HX_FIELD_EQ(inName,"alienate") ) { return alienate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopsound") ) { return stopsound_dyn(); }
		if (HX_FIELD_EQ(inName,"playsound") ) { return playsound_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseover") ) { return mouseover; }
		if (HX_FIELD_EQ(inName,"explosion") ) { return explosion; }
		if (HX_FIELD_EQ(inName,"normalise") ) { return normalise; }
		if (HX_FIELD_EQ(inName,"musiclist") ) { return musiclist; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sfxchannel") ) { return sfxchannel; }
		if (HX_FIELD_EQ(inName,"juicyfruit") ) { return juicyfruit; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hexagoncore") ) { return hexagoncore; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sfxtransform") ) { return sfxtransform; }
		if (HX_FIELD_EQ(inName,"soundchannel") ) { return soundchannel; }
		if (HX_FIELD_EQ(inName,"kenpixelfont") ) { return kenpixelfont; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buttonclicked") ) { return buttonclicked; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enterexplosion") ) { return enterexplosion; }
		if (HX_FIELD_EQ(inName,"soundtransform") ) { return soundtransform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"timerbackground") ) { return timerbackground; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentlyplaying") ) { return currentlyplaying; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"disco") ) { disco=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { select=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sfxlist") ) { sfxlist=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"chiptune") ) { chiptune=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alienate") ) { alienate=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseover") ) { mouseover=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explosion") ) { explosion=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalise") ) { normalise=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musiclist") ) { musiclist=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sfxchannel") ) { sfxchannel=inValue.Cast< ::flash::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"juicyfruit") ) { juicyfruit=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hexagoncore") ) { hexagoncore=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sfxtransform") ) { sfxtransform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundchannel") ) { soundchannel=inValue.Cast< ::flash::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kenpixelfont") ) { kenpixelfont=inValue.Cast< ::flash::text::Font >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buttonclicked") ) { buttonclicked=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enterexplosion") ) { enterexplosion=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundtransform") ) { soundtransform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"timerbackground") ) { timerbackground=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentlyplaying") ) { currentlyplaying=inValue.Cast< ::flash::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sfxtransform"));
	outFields->push(HX_CSTRING("sfxchannel"));
	outFields->push(HX_CSTRING("mouseover"));
	outFields->push(HX_CSTRING("select"));
	outFields->push(HX_CSTRING("enterexplosion"));
	outFields->push(HX_CSTRING("explosion"));
	outFields->push(HX_CSTRING("sfxlist"));
	outFields->push(HX_CSTRING("currentlyplaying"));
	outFields->push(HX_CSTRING("soundtransform"));
	outFields->push(HX_CSTRING("soundchannel"));
	outFields->push(HX_CSTRING("disco"));
	outFields->push(HX_CSTRING("chiptune"));
	outFields->push(HX_CSTRING("normalise"));
	outFields->push(HX_CSTRING("alienate"));
	outFields->push(HX_CSTRING("hexagoncore"));
	outFields->push(HX_CSTRING("juicyfruit"));
	outFields->push(HX_CSTRING("musiclist"));
	outFields->push(HX_CSTRING("kenpixelfont"));
	outFields->push(HX_CSTRING("timerbackground"));
	outFields->push(HX_CSTRING("buttonclicked"));
	outFields->push(HX_CSTRING("button"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stopsfx"),
	HX_CSTRING("playsfx"),
	HX_CSTRING("stopsound"),
	HX_CSTRING("playsound"),
	HX_CSTRING("sfxtransform"),
	HX_CSTRING("sfxchannel"),
	HX_CSTRING("mouseover"),
	HX_CSTRING("select"),
	HX_CSTRING("enterexplosion"),
	HX_CSTRING("explosion"),
	HX_CSTRING("sfxlist"),
	HX_CSTRING("currentlyplaying"),
	HX_CSTRING("soundtransform"),
	HX_CSTRING("soundchannel"),
	HX_CSTRING("disco"),
	HX_CSTRING("chiptune"),
	HX_CSTRING("normalise"),
	HX_CSTRING("alienate"),
	HX_CSTRING("hexagoncore"),
	HX_CSTRING("juicyfruit"),
	HX_CSTRING("musiclist"),
	HX_CSTRING("kenpixelfont"),
	HX_CSTRING("timerbackground"),
	HX_CSTRING("buttonclicked"),
	HX_CSTRING("button"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetManager_obj::__mClass,"__mClass");
};

Class AssetManager_obj::__mClass;

void AssetManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.managers.AssetManager"), hx::TCanCast< AssetManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers
