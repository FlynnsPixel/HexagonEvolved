#include <hxcpp.h>

#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
namespace sys{
namespace db{

::sys::db::RecordType RecordType_obj::DBigId;

::sys::db::RecordType RecordType_obj::DBigInt;

::sys::db::RecordType RecordType_obj::DBinary;

::sys::db::RecordType RecordType_obj::DBool;

::sys::db::RecordType  RecordType_obj::DBytes(int n)
	{ return hx::CreateEnum< RecordType_obj >(HX_CSTRING("DBytes"),19,hx::DynamicArray(0,1).Add(n)); }

::sys::db::RecordType RecordType_obj::DData;

::sys::db::RecordType RecordType_obj::DDate;

::sys::db::RecordType RecordType_obj::DDateTime;

::sys::db::RecordType RecordType_obj::DEncoded;

::sys::db::RecordType  RecordType_obj::DEnum(::String name)
	{ return hx::CreateEnum< RecordType_obj >(HX_CSTRING("DEnum"),31,hx::DynamicArray(0,1).Add(name)); }

::sys::db::RecordType  RecordType_obj::DFlags(Array< ::String > flags,bool autoSize)
	{ return hx::CreateEnum< RecordType_obj >(HX_CSTRING("DFlags"),23,hx::DynamicArray(0,2).Add(flags).Add(autoSize)); }

::sys::db::RecordType RecordType_obj::DFloat;

::sys::db::RecordType RecordType_obj::DId;

::sys::db::RecordType RecordType_obj::DInt;

::sys::db::RecordType RecordType_obj::DInterval;

::sys::db::RecordType RecordType_obj::DLongBinary;

::sys::db::RecordType RecordType_obj::DMediumInt;

::sys::db::RecordType RecordType_obj::DMediumUInt;

::sys::db::RecordType RecordType_obj::DNekoSerialized;

::sys::db::RecordType RecordType_obj::DNull;

::sys::db::RecordType RecordType_obj::DSerialized;

::sys::db::RecordType RecordType_obj::DSingle;

::sys::db::RecordType RecordType_obj::DSmallBinary;

::sys::db::RecordType RecordType_obj::DSmallInt;

::sys::db::RecordType RecordType_obj::DSmallText;

::sys::db::RecordType RecordType_obj::DSmallUInt;

::sys::db::RecordType  RecordType_obj::DString(int n)
	{ return hx::CreateEnum< RecordType_obj >(HX_CSTRING("DString"),9,hx::DynamicArray(0,1).Add(n)); }

::sys::db::RecordType RecordType_obj::DText;

::sys::db::RecordType RecordType_obj::DTimeStamp;

::sys::db::RecordType RecordType_obj::DTinyInt;

::sys::db::RecordType RecordType_obj::DTinyText;

::sys::db::RecordType RecordType_obj::DTinyUInt;

::sys::db::RecordType RecordType_obj::DUId;

::sys::db::RecordType RecordType_obj::DUInt;

HX_DEFINE_CREATE_ENUM(RecordType_obj)

int RecordType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DBigId")) return 4;
	if (inName==HX_CSTRING("DBigInt")) return 5;
	if (inName==HX_CSTRING("DBinary")) return 18;
	if (inName==HX_CSTRING("DBool")) return 8;
	if (inName==HX_CSTRING("DBytes")) return 19;
	if (inName==HX_CSTRING("DData")) return 30;
	if (inName==HX_CSTRING("DDate")) return 10;
	if (inName==HX_CSTRING("DDateTime")) return 11;
	if (inName==HX_CSTRING("DEncoded")) return 20;
	if (inName==HX_CSTRING("DEnum")) return 31;
	if (inName==HX_CSTRING("DFlags")) return 23;
	if (inName==HX_CSTRING("DFloat")) return 7;
	if (inName==HX_CSTRING("DId")) return 0;
	if (inName==HX_CSTRING("DInt")) return 1;
	if (inName==HX_CSTRING("DInterval")) return 32;
	if (inName==HX_CSTRING("DLongBinary")) return 17;
	if (inName==HX_CSTRING("DMediumInt")) return 28;
	if (inName==HX_CSTRING("DMediumUInt")) return 29;
	if (inName==HX_CSTRING("DNekoSerialized")) return 22;
	if (inName==HX_CSTRING("DNull")) return 33;
	if (inName==HX_CSTRING("DSerialized")) return 21;
	if (inName==HX_CSTRING("DSingle")) return 6;
	if (inName==HX_CSTRING("DSmallBinary")) return 16;
	if (inName==HX_CSTRING("DSmallInt")) return 26;
	if (inName==HX_CSTRING("DSmallText")) return 14;
	if (inName==HX_CSTRING("DSmallUInt")) return 27;
	if (inName==HX_CSTRING("DString")) return 9;
	if (inName==HX_CSTRING("DText")) return 15;
	if (inName==HX_CSTRING("DTimeStamp")) return 12;
	if (inName==HX_CSTRING("DTinyInt")) return 24;
	if (inName==HX_CSTRING("DTinyText")) return 13;
	if (inName==HX_CSTRING("DTinyUInt")) return 25;
	if (inName==HX_CSTRING("DUId")) return 2;
	if (inName==HX_CSTRING("DUInt")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordType_obj,DBytes,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordType_obj,DEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(RecordType_obj,DFlags,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordType_obj,DString,return)

int RecordType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DBigId")) return 0;
	if (inName==HX_CSTRING("DBigInt")) return 0;
	if (inName==HX_CSTRING("DBinary")) return 0;
	if (inName==HX_CSTRING("DBool")) return 0;
	if (inName==HX_CSTRING("DBytes")) return 1;
	if (inName==HX_CSTRING("DData")) return 0;
	if (inName==HX_CSTRING("DDate")) return 0;
	if (inName==HX_CSTRING("DDateTime")) return 0;
	if (inName==HX_CSTRING("DEncoded")) return 0;
	if (inName==HX_CSTRING("DEnum")) return 1;
	if (inName==HX_CSTRING("DFlags")) return 2;
	if (inName==HX_CSTRING("DFloat")) return 0;
	if (inName==HX_CSTRING("DId")) return 0;
	if (inName==HX_CSTRING("DInt")) return 0;
	if (inName==HX_CSTRING("DInterval")) return 0;
	if (inName==HX_CSTRING("DLongBinary")) return 0;
	if (inName==HX_CSTRING("DMediumInt")) return 0;
	if (inName==HX_CSTRING("DMediumUInt")) return 0;
	if (inName==HX_CSTRING("DNekoSerialized")) return 0;
	if (inName==HX_CSTRING("DNull")) return 0;
	if (inName==HX_CSTRING("DSerialized")) return 0;
	if (inName==HX_CSTRING("DSingle")) return 0;
	if (inName==HX_CSTRING("DSmallBinary")) return 0;
	if (inName==HX_CSTRING("DSmallInt")) return 0;
	if (inName==HX_CSTRING("DSmallText")) return 0;
	if (inName==HX_CSTRING("DSmallUInt")) return 0;
	if (inName==HX_CSTRING("DString")) return 1;
	if (inName==HX_CSTRING("DText")) return 0;
	if (inName==HX_CSTRING("DTimeStamp")) return 0;
	if (inName==HX_CSTRING("DTinyInt")) return 0;
	if (inName==HX_CSTRING("DTinyText")) return 0;
	if (inName==HX_CSTRING("DTinyUInt")) return 0;
	if (inName==HX_CSTRING("DUId")) return 0;
	if (inName==HX_CSTRING("DUInt")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic RecordType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DBigId")) return DBigId;
	if (inName==HX_CSTRING("DBigInt")) return DBigInt;
	if (inName==HX_CSTRING("DBinary")) return DBinary;
	if (inName==HX_CSTRING("DBool")) return DBool;
	if (inName==HX_CSTRING("DBytes")) return DBytes_dyn();
	if (inName==HX_CSTRING("DData")) return DData;
	if (inName==HX_CSTRING("DDate")) return DDate;
	if (inName==HX_CSTRING("DDateTime")) return DDateTime;
	if (inName==HX_CSTRING("DEncoded")) return DEncoded;
	if (inName==HX_CSTRING("DEnum")) return DEnum_dyn();
	if (inName==HX_CSTRING("DFlags")) return DFlags_dyn();
	if (inName==HX_CSTRING("DFloat")) return DFloat;
	if (inName==HX_CSTRING("DId")) return DId;
	if (inName==HX_CSTRING("DInt")) return DInt;
	if (inName==HX_CSTRING("DInterval")) return DInterval;
	if (inName==HX_CSTRING("DLongBinary")) return DLongBinary;
	if (inName==HX_CSTRING("DMediumInt")) return DMediumInt;
	if (inName==HX_CSTRING("DMediumUInt")) return DMediumUInt;
	if (inName==HX_CSTRING("DNekoSerialized")) return DNekoSerialized;
	if (inName==HX_CSTRING("DNull")) return DNull;
	if (inName==HX_CSTRING("DSerialized")) return DSerialized;
	if (inName==HX_CSTRING("DSingle")) return DSingle;
	if (inName==HX_CSTRING("DSmallBinary")) return DSmallBinary;
	if (inName==HX_CSTRING("DSmallInt")) return DSmallInt;
	if (inName==HX_CSTRING("DSmallText")) return DSmallText;
	if (inName==HX_CSTRING("DSmallUInt")) return DSmallUInt;
	if (inName==HX_CSTRING("DString")) return DString_dyn();
	if (inName==HX_CSTRING("DText")) return DText;
	if (inName==HX_CSTRING("DTimeStamp")) return DTimeStamp;
	if (inName==HX_CSTRING("DTinyInt")) return DTinyInt;
	if (inName==HX_CSTRING("DTinyText")) return DTinyText;
	if (inName==HX_CSTRING("DTinyUInt")) return DTinyUInt;
	if (inName==HX_CSTRING("DUId")) return DUId;
	if (inName==HX_CSTRING("DUInt")) return DUInt;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("DId"),
	HX_CSTRING("DInt"),
	HX_CSTRING("DUId"),
	HX_CSTRING("DUInt"),
	HX_CSTRING("DBigId"),
	HX_CSTRING("DBigInt"),
	HX_CSTRING("DSingle"),
	HX_CSTRING("DFloat"),
	HX_CSTRING("DBool"),
	HX_CSTRING("DString"),
	HX_CSTRING("DDate"),
	HX_CSTRING("DDateTime"),
	HX_CSTRING("DTimeStamp"),
	HX_CSTRING("DTinyText"),
	HX_CSTRING("DSmallText"),
	HX_CSTRING("DText"),
	HX_CSTRING("DSmallBinary"),
	HX_CSTRING("DLongBinary"),
	HX_CSTRING("DBinary"),
	HX_CSTRING("DBytes"),
	HX_CSTRING("DEncoded"),
	HX_CSTRING("DSerialized"),
	HX_CSTRING("DNekoSerialized"),
	HX_CSTRING("DFlags"),
	HX_CSTRING("DTinyInt"),
	HX_CSTRING("DTinyUInt"),
	HX_CSTRING("DSmallInt"),
	HX_CSTRING("DSmallUInt"),
	HX_CSTRING("DMediumInt"),
	HX_CSTRING("DMediumUInt"),
	HX_CSTRING("DData"),
	HX_CSTRING("DEnum"),
	HX_CSTRING("DInterval"),
	HX_CSTRING("DNull"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RecordType_obj::DBigId,"DBigId");
	HX_MARK_MEMBER_NAME(RecordType_obj::DBigInt,"DBigInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DBinary,"DBinary");
	HX_MARK_MEMBER_NAME(RecordType_obj::DBool,"DBool");
	HX_MARK_MEMBER_NAME(RecordType_obj::DData,"DData");
	HX_MARK_MEMBER_NAME(RecordType_obj::DDate,"DDate");
	HX_MARK_MEMBER_NAME(RecordType_obj::DDateTime,"DDateTime");
	HX_MARK_MEMBER_NAME(RecordType_obj::DEncoded,"DEncoded");
	HX_MARK_MEMBER_NAME(RecordType_obj::DFloat,"DFloat");
	HX_MARK_MEMBER_NAME(RecordType_obj::DId,"DId");
	HX_MARK_MEMBER_NAME(RecordType_obj::DInt,"DInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DInterval,"DInterval");
	HX_MARK_MEMBER_NAME(RecordType_obj::DLongBinary,"DLongBinary");
	HX_MARK_MEMBER_NAME(RecordType_obj::DMediumInt,"DMediumInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DMediumUInt,"DMediumUInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DNekoSerialized,"DNekoSerialized");
	HX_MARK_MEMBER_NAME(RecordType_obj::DNull,"DNull");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSerialized,"DSerialized");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSingle,"DSingle");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallBinary,"DSmallBinary");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallInt,"DSmallInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallText,"DSmallText");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallUInt,"DSmallUInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DText,"DText");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTimeStamp,"DTimeStamp");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTinyInt,"DTinyInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTinyText,"DTinyText");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTinyUInt,"DTinyUInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DUId,"DUId");
	HX_MARK_MEMBER_NAME(RecordType_obj::DUInt,"DUInt");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RecordType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBigId,"DBigId");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBigInt,"DBigInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBinary,"DBinary");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBool,"DBool");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DData,"DData");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DDate,"DDate");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DDateTime,"DDateTime");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DEncoded,"DEncoded");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DFloat,"DFloat");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DId,"DId");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DInt,"DInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DInterval,"DInterval");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DLongBinary,"DLongBinary");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DMediumInt,"DMediumInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DMediumUInt,"DMediumUInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DNekoSerialized,"DNekoSerialized");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DNull,"DNull");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSerialized,"DSerialized");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSingle,"DSingle");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallBinary,"DSmallBinary");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallInt,"DSmallInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallText,"DSmallText");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallUInt,"DSmallUInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DText,"DText");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTimeStamp,"DTimeStamp");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTinyInt,"DTinyInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTinyText,"DTinyText");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTinyUInt,"DTinyUInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DUId,"DUId");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DUInt,"DUInt");
};

static ::String sMemberFields[] = { ::String(null()) };
Class RecordType_obj::__mClass;

Dynamic __Create_RecordType_obj() { return new RecordType_obj; }

void RecordType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.RecordType"), hx::TCanCast< RecordType_obj >,sStaticFields,sMemberFields,
	&__Create_RecordType_obj, &__Create,
	&super::__SGetClass(), &CreateRecordType_obj, sMarkStatics, sVisitStatic);
}

void RecordType_obj::__boot()
{
hx::Static(DBigId) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DBigId"),4);
hx::Static(DBigInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DBigInt"),5);
hx::Static(DBinary) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DBinary"),18);
hx::Static(DBool) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DBool"),8);
hx::Static(DData) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DData"),30);
hx::Static(DDate) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DDate"),10);
hx::Static(DDateTime) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DDateTime"),11);
hx::Static(DEncoded) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DEncoded"),20);
hx::Static(DFloat) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DFloat"),7);
hx::Static(DId) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DId"),0);
hx::Static(DInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DInt"),1);
hx::Static(DInterval) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DInterval"),32);
hx::Static(DLongBinary) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DLongBinary"),17);
hx::Static(DMediumInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DMediumInt"),28);
hx::Static(DMediumUInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DMediumUInt"),29);
hx::Static(DNekoSerialized) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DNekoSerialized"),22);
hx::Static(DNull) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DNull"),33);
hx::Static(DSerialized) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DSerialized"),21);
hx::Static(DSingle) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DSingle"),6);
hx::Static(DSmallBinary) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DSmallBinary"),16);
hx::Static(DSmallInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DSmallInt"),26);
hx::Static(DSmallText) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DSmallText"),14);
hx::Static(DSmallUInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DSmallUInt"),27);
hx::Static(DText) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DText"),15);
hx::Static(DTimeStamp) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DTimeStamp"),12);
hx::Static(DTinyInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DTinyInt"),24);
hx::Static(DTinyText) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DTinyText"),13);
hx::Static(DTinyUInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DTinyUInt"),25);
hx::Static(DUId) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DUId"),2);
hx::Static(DUInt) = hx::CreateEnum< RecordType_obj >(HX_CSTRING("DUInt"),3);
}


} // end namespace sys
} // end namespace db
