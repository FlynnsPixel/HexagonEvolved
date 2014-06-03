#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{

HX_DEFINE_DYNAMIC_FUNC0(Connection_obj,lastInsertId,return )

HX_DEFINE_DYNAMIC_FUNC2(Connection_obj,addValue,)

HX_DEFINE_DYNAMIC_FUNC1(Connection_obj,request,return )


static ::String sMemberFields[] = {
	HX_CSTRING("lastInsertId"),
	HX_CSTRING("addValue"),
	HX_CSTRING("request"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

Class Connection_obj::__mClass;

void Connection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Connection"), hx::TCanCast< Connection_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Connection_obj::__boot()
{
}

} // end namespace sys
} // end namespace db
