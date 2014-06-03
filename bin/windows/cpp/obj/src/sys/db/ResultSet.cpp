#include <hxcpp.h>

#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{

HX_DEFINE_DYNAMIC_FUNC0(ResultSet_obj,next,return )


static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResultSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResultSet_obj::__mClass,"__mClass");
};

Class ResultSet_obj::__mClass;

void ResultSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.ResultSet"), hx::TCanCast< ResultSet_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ResultSet_obj::__boot()
{
}

} // end namespace sys
} // end namespace db
