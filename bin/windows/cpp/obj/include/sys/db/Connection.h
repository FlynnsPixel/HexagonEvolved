#ifndef INCLUDED_sys_db_Connection
#define INCLUDED_sys_db_Connection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Connection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Connection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual int lastInsertId( )=0;
		Dynamic lastInsertId_dyn();
virtual Void addValue( ::StringBuf s,Dynamic v)=0;
		Dynamic addValue_dyn();
virtual ::sys::db::ResultSet request( ::String s)=0;
		Dynamic request_dyn();
};

#define DELEGATE_sys_db_Connection \
virtual int lastInsertId( ) { return mDelegate->lastInsertId();}  \
virtual Dynamic lastInsertId_dyn() { return mDelegate->lastInsertId_dyn();}  \
virtual Void addValue( ::StringBuf s,Dynamic v) { return mDelegate->addValue(s,v);}  \
virtual Dynamic addValue_dyn() { return mDelegate->addValue_dyn();}  \
virtual ::sys::db::ResultSet request( ::String s) { return mDelegate->request(s);}  \
virtual Dynamic request_dyn() { return mDelegate->request_dyn();}  \


template<typename IMPL>
class Connection_delegate_ : public Connection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Connection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sys_db_Connection
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Connection */ 
