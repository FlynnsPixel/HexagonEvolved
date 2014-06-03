#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_build_game_managers_ToolManager
#include <core/build/game/managers/ToolManager.h>
#endif
#ifndef INCLUDED_core_build_game_tools_Animation
#include <core/build/game/tools/Animation.h>
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
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace core{
namespace build{
namespace game{
namespace managers{

Void ToolManager_obj::__construct()
{
HX_STACK_PUSH("ToolManager::new","core/build/game/managers/ToolManager.hx",25);
{
	HX_STACK_LINE(26)
	this->animations = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(27)
	this->trails = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

ToolManager_obj::~ToolManager_obj() { }

Dynamic ToolManager_obj::__CreateEmpty() { return  new ToolManager_obj; }
hx::ObjectPtr< ToolManager_obj > ToolManager_obj::__new()
{  hx::ObjectPtr< ToolManager_obj > result = new ToolManager_obj();
	result->__construct();
	return result;}

Dynamic ToolManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolManager_obj > result = new ToolManager_obj();
	result->__construct();
	return result;}

::flash::display::BitmapData ToolManager_obj::flip( ::flash::display::BitmapData data){
	HX_STACK_PUSH("ToolManager::flip","core/build/game/managers/ToolManager.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(80)
	::flash::display::BitmapData flippedata = ::flash::display::BitmapData_obj::__new(data->get_width(),data->get_height(),true,(int)0,null());		HX_STACK_VAR(flippedata,"flippedata");
	HX_STACK_LINE(81)
	::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new((int)-1,(int)0,(int)0,(int)1,data->get_width(),(int)0);		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(82)
	flippedata->draw(data,matrix,null(),null(),null(),null());
	HX_STACK_LINE(83)
	data->dispose();
	HX_STACK_LINE(83)
	data = null();
	HX_STACK_LINE(84)
	return flippedata;
}


HX_DEFINE_DYNAMIC_FUNC1(ToolManager_obj,flip,return )

Void ToolManager_obj::remove( Dynamic object,Dynamic from){
{
		HX_STACK_PUSH("ToolManager::remove","core/build/game/managers/ToolManager.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_ARG(from,"from");
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = from->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while(((_g1 < _g))){
			HX_STACK_LINE(71)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			if (((from->__GetItem(i) == object))){
				HX_STACK_LINE(73)
				from->__Field(HX_CSTRING("splice"),true)(i,(int)1);
				HX_STACK_LINE(74)
				break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ToolManager_obj,remove,(void))

::core::build::game::tools::Trail ToolManager_obj::createtrail( ::flash::display::BitmapData image,Float x,Float y,hx::Null< Float >  __o_fadespeed,hx::Null< bool >  __o_autoupdate){
Float fadespeed = __o_fadespeed.Default(.1);
bool autoupdate = __o_autoupdate.Default(true);
	HX_STACK_PUSH("ToolManager::createtrail","core/build/game/managers/ToolManager.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_ARG(image,"image");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(fadespeed,"fadespeed");
	HX_STACK_ARG(autoupdate,"autoupdate");
{
		HX_STACK_LINE(65)
		::core::build::game::tools::Trail trail = ::core::build::game::tools::Trail_obj::__new(image,x,y,fadespeed);		HX_STACK_VAR(trail,"trail");
		HX_STACK_LINE(66)
		if ((autoupdate)){
			HX_STACK_LINE(66)
			this->trails->__Field(HX_CSTRING("push"),true)(trail);
		}
		HX_STACK_LINE(67)
		return trail;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(ToolManager_obj,createtrail,return )

Array< ::Dynamic > ToolManager_obj::cutspritesheet( ::flash::display::BitmapData sheet,Float width,Float height){
	HX_STACK_PUSH("ToolManager::cutspritesheet","core/build/game/managers/ToolManager.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sheet,"sheet");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(46)
	Array< ::Dynamic > frames = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(47)
	Float rowx = (Float(sheet->get_width()) / Float(width));		HX_STACK_VAR(rowx,"rowx");
	HX_STACK_LINE(48)
	Float rowy = (Float(sheet->get_height()) / Float(height));		HX_STACK_VAR(rowy,"rowy");
	HX_STACK_LINE(49)
	::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(50)
	::flash::geom::Point point = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(51)
	rect->width = width;
	HX_STACK_LINE(51)
	rect->height = height;
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::Std_obj::_int(rowy);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		while(((_g1 < _g))){
			HX_STACK_LINE(53)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = ::Std_obj::_int(rowx);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(54)
				while(((_g3 < _g2))){
					HX_STACK_LINE(54)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(55)
					::flash::display::BitmapData data = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(width),::Std_obj::_int(height),true,(int)0,null());		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(56)
					rect->x = ::Math_obj::round((x * width));
					HX_STACK_LINE(56)
					rect->y = ::Math_obj::round((y * height));
					HX_STACK_LINE(57)
					data->copyPixels(sheet,rect,point,null(),null(),null());
					HX_STACK_LINE(58)
					frames->__Field(HX_CSTRING("push"),true)(data);
				}
			}
		}
	}
	HX_STACK_LINE(61)
	return frames;
}


HX_DEFINE_DYNAMIC_FUNC3(ToolManager_obj,cutspritesheet,return )

::core::build::game::tools::Animation ToolManager_obj::createanimation( Array< ::Dynamic > frames,int rate,::flash::display::Bitmap applyto,hx::Null< bool >  __o_autoupdate){
bool autoupdate = __o_autoupdate.Default(true);
	HX_STACK_PUSH("ToolManager::createanimation","core/build/game/managers/ToolManager.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frames,"frames");
	HX_STACK_ARG(rate,"rate");
	HX_STACK_ARG(applyto,"applyto");
	HX_STACK_ARG(autoupdate,"autoupdate");
{
		HX_STACK_LINE(40)
		::core::build::game::tools::Animation animation = ::core::build::game::tools::Animation_obj::__new(frames,rate,applyto);		HX_STACK_VAR(animation,"animation");
		HX_STACK_LINE(41)
		if ((autoupdate)){
			HX_STACK_LINE(41)
			this->animations->__Field(HX_CSTRING("push"),true)(animation);
		}
		HX_STACK_LINE(42)
		return animation;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(ToolManager_obj,createanimation,return )

Void ToolManager_obj::update( ){
{
		HX_STACK_PUSH("ToolManager::update","core/build/game/managers/ToolManager.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->animations->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			while(((_g1 < _g))){
				HX_STACK_LINE(31)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(32)
				if (((i <= (this->animations->__Field(HX_CSTRING("length"),true) - (int)1)))){
					HX_STACK_LINE(32)
					this->animations->__get(i).StaticCast< ::core::build::game::tools::Animation >()->update();
				}
			}
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->trails->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			while(((_g1 < _g))){
				HX_STACK_LINE(34)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(35)
				if (((i <= (this->trails->__Field(HX_CSTRING("length"),true) - (int)1)))){
					HX_STACK_LINE(35)
					this->trails->__get(i).StaticCast< ::core::build::game::tools::Trail >()->update();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ToolManager_obj,update,(void))


ToolManager_obj::ToolManager_obj()
{
}

void ToolManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolManager);
	HX_MARK_MEMBER_NAME(trails,"trails");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_END_CLASS();
}

void ToolManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(trails,"trails");
	HX_VISIT_MEMBER_NAME(animations,"animations");
}

Dynamic ToolManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"trails") ) { return trails; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createtrail") ) { return createtrail_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cutspritesheet") ) { return cutspritesheet_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createanimation") ) { return createanimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ToolManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"trails") ) { trails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToolManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("trails"));
	outFields->push(HX_CSTRING("animations"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("flip"),
	HX_CSTRING("remove"),
	HX_CSTRING("createtrail"),
	HX_CSTRING("cutspritesheet"),
	HX_CSTRING("createanimation"),
	HX_CSTRING("update"),
	HX_CSTRING("trails"),
	HX_CSTRING("animations"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolManager_obj::__mClass,"__mClass");
};

Class ToolManager_obj::__mClass;

void ToolManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.managers.ToolManager"), hx::TCanCast< ToolManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ToolManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers
