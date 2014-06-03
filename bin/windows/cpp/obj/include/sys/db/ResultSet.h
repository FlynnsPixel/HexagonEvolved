#ifndef INCLUDED_sys_db_ResultSet
#define INCLUDED_sys_db_ResultSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  ResultSet_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ResultSet_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Dynamic next( )=0;
		Dynamic next_dyn();
};

#define DELEGATE_sys_db_ResultSet \
virtual Dynamic next( ) { return mDelegate->next();}  \
virtual Dynamic next_dyn() { return mDelegate->next_dyn();}  \


template<typename IMPL>
class ResultSet_delegate_ : public ResultSet_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ResultSet_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sys_db_ResultSet
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_ResultSet */ 
