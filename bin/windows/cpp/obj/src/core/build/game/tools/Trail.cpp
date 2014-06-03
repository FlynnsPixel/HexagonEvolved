#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_managers_Universe
#include <core/build/game/managers/Universe.h>
#endif
#ifndef INCLUDED_core_build_game_tools_Trail
#include <core/build/game/tools/Trail.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
namespace tools{

Void Trail_obj::__construct(::flash::display::BitmapData image,Float posx,Float posy,Float speed)
{
HX_STACK_PUSH("Trail::new","core/build/game/tools/Trail.hx",14);
{
	HX_STACK_LINE(26)
	this->rotation = (int)0;
	HX_STACK_LINE(25)
	this->beginalpha = (int)1;
	HX_STACK_LINE(24)
	this->movemap = false;
	HX_STACK_LINE(20)
	this->pause = false;
	HX_STACK_LINE(29)
	this->fadespeed = speed;
	HX_STACK_LINE(30)
	this->trailimage = image;
	HX_STACK_LINE(31)
	this->x = posx;
	HX_STACK_LINE(32)
	this->y = posy;
	HX_STACK_LINE(33)
	this->trails = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

Trail_obj::~Trail_obj() { }

Dynamic Trail_obj::__CreateEmpty() { return  new Trail_obj; }
hx::ObjectPtr< Trail_obj > Trail_obj::__new(::flash::display::BitmapData image,Float posx,Float posy,Float speed)
{  hx::ObjectPtr< Trail_obj > result = new Trail_obj();
	result->__construct(image,posx,posy,speed);
	return result;}

Dynamic Trail_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Trail_obj > result = new Trail_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Trail_obj::removeall( ){
{
		HX_STACK_PUSH("Trail::removeall","core/build/game/tools/Trail.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->trails->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			while(((_g1 < _g))){
				HX_STACK_LINE(63)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(64)
				this->trails->__get(i).StaticCast< ::flash::display::Sprite >()->get_parent()->removeChild(this->trails->__get(i).StaticCast< ::flash::display::Sprite >());
			}
		}
		HX_STACK_LINE(69)
		this->trails = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Trail_obj,removeall,(void))

Void Trail_obj::update( ){
{
		HX_STACK_PUSH("Trail::update","core/build/game/tools/Trail.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		if ((!(this->pause))){
			HX_STACK_LINE(38)
			::flash::display::Sprite trail = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(trail,"trail");
			HX_STACK_LINE(39)
			::flash::display::Bitmap base = ::flash::display::Bitmap_obj::__new(this->trailimage,null(),null());		HX_STACK_VAR(base,"base");
			HX_STACK_LINE(40)
			trail->addChild(base);
			HX_STACK_LINE(41)
			trail->set_x((this->x + (Float(base->get_width()) / Float((int)2))));
			HX_STACK_LINE(42)
			trail->set_y((this->y + (Float(base->get_height()) / Float((int)2))));
			HX_STACK_LINE(43)
			base->set_x(-(((Float(base->get_width()) / Float((int)2)))));
			HX_STACK_LINE(44)
			base->set_y(-(((Float(base->get_height()) / Float((int)2)))));
			HX_STACK_LINE(45)
			trail->set_alpha(this->beginalpha);
			HX_STACK_LINE(46)
			::core::build::game::managers::Universe_obj::stage->addChild(trail);
			HX_STACK_LINE(47)
			this->trails->__Field(HX_CSTRING("push"),true)(trail);
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->trails->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				while(((_g1 < _g))){
					HX_STACK_LINE(49)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(50)
					if (((i <= (this->trails->__Field(HX_CSTRING("length"),true) - (int)1)))){
						HX_STACK_LINE(51)
						{
							HX_STACK_LINE(51)
							::flash::display::Sprite _g2 = this->trails->__get(i).StaticCast< ::flash::display::Sprite >();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(51)
							_g2->set_alpha((_g2->get_alpha() - this->fadespeed));
						}
						HX_STACK_LINE(52)
						{
							HX_STACK_LINE(52)
							::flash::display::Sprite _g2 = this->trails->__get(i).StaticCast< ::flash::display::Sprite >();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(52)
							_g2->set_rotation((_g2->get_rotation() + ((this->trails->__get(i).StaticCast< ::flash::display::Sprite >()->get_rotation() - this->rotation))));
						}
						HX_STACK_LINE(53)
						if (((this->trails->__get(i).StaticCast< ::flash::display::Sprite >()->get_alpha() <= (int)0))){
							HX_STACK_LINE(54)
							this->trails->__get(i).StaticCast< ::flash::display::Sprite >()->get_parent()->removeChild(this->trails->__get(i).StaticCast< ::flash::display::Sprite >());
							HX_STACK_LINE(55)
							::flash::_Vector::Vector_Impl__obj::splice(this->trails,i,(int)1);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Trail_obj,update,(void))


Trail_obj::Trail_obj()
{
}

void Trail_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Trail);
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(beginalpha,"beginalpha");
	HX_MARK_MEMBER_NAME(movemap,"movemap");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(trailimage,"trailimage");
	HX_MARK_MEMBER_NAME(fadespeed,"fadespeed");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(trails,"trails");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Trail_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(beginalpha,"beginalpha");
	HX_VISIT_MEMBER_NAME(movemap,"movemap");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(trailimage,"trailimage");
	HX_VISIT_MEMBER_NAME(fadespeed,"fadespeed");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(trails,"trails");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Trail_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"trails") ) { return trails; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"movemap") ) { return movemap; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeall") ) { return removeall_dyn(); }
		if (HX_FIELD_EQ(inName,"fadespeed") ) { return fadespeed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginalpha") ) { return beginalpha; }
		if (HX_FIELD_EQ(inName,"trailimage") ) { return trailimage; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Trail_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trails") ) { trails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"movemap") ) { movemap=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fadespeed") ) { fadespeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginalpha") ) { beginalpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trailimage") ) { trailimage=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Trail_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("beginalpha"));
	outFields->push(HX_CSTRING("movemap"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("trailimage"));
	outFields->push(HX_CSTRING("fadespeed"));
	outFields->push(HX_CSTRING("pause"));
	outFields->push(HX_CSTRING("trails"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("removeall"),
	HX_CSTRING("update"),
	HX_CSTRING("rotation"),
	HX_CSTRING("beginalpha"),
	HX_CSTRING("movemap"),
	HX_CSTRING("parent"),
	HX_CSTRING("trailimage"),
	HX_CSTRING("fadespeed"),
	HX_CSTRING("pause"),
	HX_CSTRING("trails"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Trail_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Trail_obj::__mClass,"__mClass");
};

Class Trail_obj::__mClass;

void Trail_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.tools.Trail"), hx::TCanCast< Trail_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Trail_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools
