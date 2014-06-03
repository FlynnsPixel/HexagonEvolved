#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_tools_Point2D
#include <core/build/game/tools/Point2D.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace core{
namespace build{
namespace game{
namespace tools{

Void Point2D_obj::__construct()
{
HX_STACK_PUSH("Point2D::new","core/build/game/tools/Point2D.hx",16);
{
	HX_STACK_LINE(17)
	this->start = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(18)
	this->end = ::flash::geom::Point_obj::__new((int)0,(int)0);
}
;
	return null();
}

Point2D_obj::~Point2D_obj() { }

Dynamic Point2D_obj::__CreateEmpty() { return  new Point2D_obj; }
hx::ObjectPtr< Point2D_obj > Point2D_obj::__new()
{  hx::ObjectPtr< Point2D_obj > result = new Point2D_obj();
	result->__construct();
	return result;}

Dynamic Point2D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point2D_obj > result = new Point2D_obj();
	result->__construct();
	return result;}


Point2D_obj::Point2D_obj()
{
}

void Point2D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Point2D);
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_END_CLASS();
}

void Point2D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(start,"start");
}

Dynamic Point2D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Point2D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::flash::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point2D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("start"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("end"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point2D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point2D_obj::__mClass,"__mClass");
};

Class Point2D_obj::__mClass;

void Point2D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.tools.Point2D"), hx::TCanCast< Point2D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Point2D_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools
