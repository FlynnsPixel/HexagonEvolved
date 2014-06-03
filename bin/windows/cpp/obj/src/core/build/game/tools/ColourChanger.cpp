#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_tools_ColourChanger
#include <core/build/game/tools/ColourChanger.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
#endif
namespace core{
namespace build{
namespace game{
namespace tools{

Void ColourChanger_obj::__construct(::flash::display::DisplayObject applyTo,hx::Null< Float >  __o_colourSpeed,hx::Null< Float >  __o_maxItensity)
{
HX_STACK_PUSH("ColourChanger::new","core/build/game/tools/ColourChanger.hx",12);
Float colourSpeed = __o_colourSpeed.Default(.002);
Float maxItensity = __o_maxItensity.Default(1.4);
{
	HX_STACK_LINE(22)
	this->reversed = false;
	HX_STACK_LINE(20)
	this->maxrgb = (int)0;
	HX_STACK_LINE(19)
	this->rgbspeed = (int)0;
	HX_STACK_LINE(18)
	this->blueAdd = (int)0;
	HX_STACK_LINE(17)
	this->greenAdd = (int)0;
	HX_STACK_LINE(16)
	this->redAdd = (int)0;
	HX_STACK_LINE(25)
	this->rgbspeed = colourSpeed;
	HX_STACK_LINE(26)
	this->maxrgb = maxItensity;
	HX_STACK_LINE(27)
	this->container = applyTo;
	HX_STACK_LINE(29)
	this->transform = ::flash::geom::ColorTransform_obj::__new(this->maxrgb,(int)1,(int)1,null(),null(),null(),null(),null());
	HX_STACK_LINE(30)
	this->redAdd = this->rgbspeed;
}
;
	return null();
}

ColourChanger_obj::~ColourChanger_obj() { }

Dynamic ColourChanger_obj::__CreateEmpty() { return  new ColourChanger_obj; }
hx::ObjectPtr< ColourChanger_obj > ColourChanger_obj::__new(::flash::display::DisplayObject applyTo,hx::Null< Float >  __o_colourSpeed,hx::Null< Float >  __o_maxItensity)
{  hx::ObjectPtr< ColourChanger_obj > result = new ColourChanger_obj();
	result->__construct(applyTo,__o_colourSpeed,__o_maxItensity);
	return result;}

Dynamic ColourChanger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColourChanger_obj > result = new ColourChanger_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ColourChanger_obj::revert( ){
{
		HX_STACK_PUSH("ColourChanger::revert","core/build/game/tools/ColourChanger.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_LINE(89)
		if (((this->redAdd > (int)0))){
			HX_STACK_LINE(90)
			this->greenAdd = (int)0;
			HX_STACK_LINE(91)
			this->redAdd = -(this->rgbspeed);
			HX_STACK_LINE(92)
			this->blueAdd = this->rgbspeed;
		}
		else{
			HX_STACK_LINE(93)
			if (((this->blueAdd > (int)0))){
				HX_STACK_LINE(94)
				this->redAdd = (int)0;
				HX_STACK_LINE(95)
				this->blueAdd = -(this->rgbspeed);
				HX_STACK_LINE(96)
				this->greenAdd = this->rgbspeed;
			}
			else{
				HX_STACK_LINE(97)
				if (((this->greenAdd > (int)0))){
					HX_STACK_LINE(98)
					this->redAdd = this->rgbspeed;
					HX_STACK_LINE(99)
					this->blueAdd = (int)0;
					HX_STACK_LINE(100)
					this->greenAdd = -(this->rgbspeed);
				}
			}
		}
		HX_STACK_LINE(102)
		this->reversed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColourChanger_obj,revert,(void))

Void ColourChanger_obj::reverse( ){
{
		HX_STACK_PUSH("ColourChanger::reverse","core/build/game/tools/ColourChanger.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		if (((this->redAdd > (int)0))){
			HX_STACK_LINE(73)
			this->greenAdd = this->rgbspeed;
			HX_STACK_LINE(74)
			this->redAdd = -(this->rgbspeed);
			HX_STACK_LINE(75)
			this->blueAdd = (int)0;
		}
		else{
			HX_STACK_LINE(76)
			if (((this->blueAdd > (int)0))){
				HX_STACK_LINE(77)
				this->redAdd = this->rgbspeed;
				HX_STACK_LINE(78)
				this->blueAdd = -(this->rgbspeed);
				HX_STACK_LINE(79)
				this->greenAdd = (int)0;
			}
			else{
				HX_STACK_LINE(80)
				if (((this->greenAdd > (int)0))){
					HX_STACK_LINE(81)
					this->redAdd = (int)0;
					HX_STACK_LINE(82)
					this->blueAdd = this->rgbspeed;
					HX_STACK_LINE(83)
					this->greenAdd = -(this->rgbspeed);
				}
			}
		}
		HX_STACK_LINE(85)
		this->reversed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColourChanger_obj,reverse,(void))

Void ColourChanger_obj::update( ){
{
		HX_STACK_PUSH("ColourChanger::update","core/build/game/tools/ColourChanger.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		hx::AddEq(this->transform->redMultiplier,this->redAdd);
		HX_STACK_LINE(40)
		hx::AddEq(this->transform->greenMultiplier,this->greenAdd);
		HX_STACK_LINE(41)
		hx::AddEq(this->transform->blueMultiplier,this->blueAdd);
		HX_STACK_LINE(43)
		if (((this->transform->redMultiplier >= this->maxrgb))){
			HX_STACK_LINE(44)
			this->transform->redMultiplier = this->maxrgb;
			HX_STACK_LINE(45)
			this->transform->greenMultiplier = (int)1;
			HX_STACK_LINE(46)
			if ((this->reversed)){
				HX_STACK_LINE(46)
				this->reverse();
			}
			else{
				HX_STACK_LINE(48)
				this->revert();
			}
		}
		else{
			HX_STACK_LINE(51)
			if (((this->transform->blueMultiplier >= this->maxrgb))){
				HX_STACK_LINE(52)
				this->transform->redMultiplier = (int)1;
				HX_STACK_LINE(53)
				this->transform->blueMultiplier = this->maxrgb;
				HX_STACK_LINE(54)
				if ((this->reversed)){
					HX_STACK_LINE(54)
					this->reverse();
				}
				else{
					HX_STACK_LINE(56)
					this->revert();
				}
			}
			else{
				HX_STACK_LINE(59)
				if (((this->transform->greenMultiplier >= this->maxrgb))){
					HX_STACK_LINE(60)
					this->transform->greenMultiplier = this->maxrgb;
					HX_STACK_LINE(61)
					this->transform->blueMultiplier = (int)1;
					HX_STACK_LINE(62)
					if ((this->reversed)){
						HX_STACK_LINE(62)
						this->reverse();
					}
					else{
						HX_STACK_LINE(64)
						this->revert();
					}
				}
			}
		}
		HX_STACK_LINE(68)
		if (((this->container != null()))){
			HX_STACK_LINE(68)
			this->container->get_transform()->set_colorTransform(this->transform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColourChanger_obj,update,(void))

Void ColourChanger_obj::reset( ){
{
		HX_STACK_PUSH("ColourChanger::reset","core/build/game/tools/ColourChanger.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->container->get_transform()->set_colorTransform(this->transform);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColourChanger_obj,reset,(void))


ColourChanger_obj::ColourChanger_obj()
{
}

void ColourChanger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColourChanger);
	HX_MARK_MEMBER_NAME(reversed,"reversed");
	HX_MARK_MEMBER_NAME(container,"container");
	HX_MARK_MEMBER_NAME(maxrgb,"maxrgb");
	HX_MARK_MEMBER_NAME(rgbspeed,"rgbspeed");
	HX_MARK_MEMBER_NAME(blueAdd,"blueAdd");
	HX_MARK_MEMBER_NAME(greenAdd,"greenAdd");
	HX_MARK_MEMBER_NAME(redAdd,"redAdd");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_END_CLASS();
}

void ColourChanger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(reversed,"reversed");
	HX_VISIT_MEMBER_NAME(container,"container");
	HX_VISIT_MEMBER_NAME(maxrgb,"maxrgb");
	HX_VISIT_MEMBER_NAME(rgbspeed,"rgbspeed");
	HX_VISIT_MEMBER_NAME(blueAdd,"blueAdd");
	HX_VISIT_MEMBER_NAME(greenAdd,"greenAdd");
	HX_VISIT_MEMBER_NAME(redAdd,"redAdd");
	HX_VISIT_MEMBER_NAME(transform,"transform");
}

Dynamic ColourChanger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"revert") ) { return revert_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"maxrgb") ) { return maxrgb; }
		if (HX_FIELD_EQ(inName,"redAdd") ) { return redAdd; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"blueAdd") ) { return blueAdd; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reversed") ) { return reversed; }
		if (HX_FIELD_EQ(inName,"rgbspeed") ) { return rgbspeed; }
		if (HX_FIELD_EQ(inName,"greenAdd") ) { return greenAdd; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColourChanger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maxrgb") ) { maxrgb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"redAdd") ) { redAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blueAdd") ) { blueAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reversed") ) { reversed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rgbspeed") ) { rgbspeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenAdd") ) { greenAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColourChanger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("reversed"));
	outFields->push(HX_CSTRING("container"));
	outFields->push(HX_CSTRING("maxrgb"));
	outFields->push(HX_CSTRING("rgbspeed"));
	outFields->push(HX_CSTRING("blueAdd"));
	outFields->push(HX_CSTRING("greenAdd"));
	outFields->push(HX_CSTRING("redAdd"));
	outFields->push(HX_CSTRING("transform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("revert"),
	HX_CSTRING("reverse"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("reversed"),
	HX_CSTRING("container"),
	HX_CSTRING("maxrgb"),
	HX_CSTRING("rgbspeed"),
	HX_CSTRING("blueAdd"),
	HX_CSTRING("greenAdd"),
	HX_CSTRING("redAdd"),
	HX_CSTRING("transform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColourChanger_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColourChanger_obj::__mClass,"__mClass");
};

Class ColourChanger_obj::__mClass;

void ColourChanger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.tools.ColourChanger"), hx::TCanCast< ColourChanger_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColourChanger_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools
