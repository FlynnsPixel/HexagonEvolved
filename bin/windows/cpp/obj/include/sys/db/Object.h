#ifndef INCLUDED_sys_db_Object
#define INCLUDED_sys_db_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Manager)
HX_DECLARE_CLASS2(sys,db,Object)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Object_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Object_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Object_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Object"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool isLocked( );
		Dynamic isLocked_dyn();

		virtual Void _delete( );
		Dynamic _delete_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void insert( );
		Dynamic insert_dyn();

		::sys::db::Manager _manager;
		bool _lock;
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Object */ 
