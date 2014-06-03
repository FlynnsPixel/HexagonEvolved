#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_build_game_tools_Animation
#include <core/build/game/tools/Animation.h>
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
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
namespace tools{

Void Animation_obj::__construct(Array< ::Dynamic > animationframes,int animationrate,::flash::display::Bitmap applytobase)
{
HX_STACK_PUSH("Animation::new","core/build/game/tools/Animation.hx",15);
{
	HX_STACK_LINE(24)
	this->loop = true;
	HX_STACK_LINE(23)
	this->pause = false;
	HX_STACK_LINE(21)
	this->rate = (int)0;
	HX_STACK_LINE(20)
	this->timer = (int)0;
	HX_STACK_LINE(19)
	this->index = (int)0;
	HX_STACK_LINE(27)
	this->frames = animationframes;
	HX_STACK_LINE(28)
	this->rate = animationrate;
	HX_STACK_LINE(29)
	this->target = applytobase;
	HX_STACK_LINE(30)
	this->index = ::Std_obj::_int((::Math_obj::random() * ((this->frames->__Field(HX_CSTRING("length"),true) - (int)1))));
	HX_STACK_LINE(31)
	this->updateframe();
}
;
	return null();
}

Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(Array< ::Dynamic > animationframes,int animationrate,::flash::display::Bitmap applytobase)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(animationframes,animationrate,applytobase);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Animation_obj::updateframe( ){
{
		HX_STACK_PUSH("Animation::updateframe","core/build/game/tools/Animation.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		if (((bool((this->index >= this->frames->__Field(HX_CSTRING("length"),true))) && bool(this->loop)))){
			HX_STACK_LINE(45)
			this->index = (int)0;
		}
		HX_STACK_LINE(46)
		if (((bool((this->index >= (int)0)) && bool((this->index <= (this->frames->__Field(HX_CSTRING("length"),true) - (int)1)))))){
			HX_STACK_LINE(46)
			this->target->set_bitmapData(this->frames->__get(this->index).StaticCast< ::flash::display::BitmapData >());
		}
		HX_STACK_LINE(47)
		if ((this->loop)){
			HX_STACK_LINE(47)
			++(this->index);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,updateframe,(void))

Void Animation_obj::update( ){
{
		HX_STACK_PUSH("Animation::update","core/build/game/tools/Animation.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		if ((!(this->pause))){
			HX_STACK_LINE(36)
			++(this->timer);
			HX_STACK_LINE(37)
			if (((this->timer >= this->rate))){
				HX_STACK_LINE(38)
				this->updateframe();
				HX_STACK_LINE(39)
				this->timer = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,update,(void))


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(frames,"frames");
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateframe") ) { return updateframe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("loop"));
	outFields->push(HX_CSTRING("pause"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("rate"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("frames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateframe"),
	HX_CSTRING("update"),
	HX_CSTRING("loop"),
	HX_CSTRING("pause"),
	HX_CSTRING("target"),
	HX_CSTRING("rate"),
	HX_CSTRING("timer"),
	HX_CSTRING("index"),
	HX_CSTRING("frames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.tools.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animation_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools
