#ifndef INCLUDED_sys_db_Manager
#define INCLUDED_sys_db_Manager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,Manager)
HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Manager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Manager_obj OBJ_;
		Manager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Manager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Manager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Manager"); }

		virtual Dynamic getFromCache( Dynamic x,bool lock);
		Dynamic getFromCache_dyn();

		virtual Void removeFromCache( Dynamic x);
		Dynamic removeFromCache_dyn();

		virtual Void addToCache( Dynamic x);
		Dynamic addToCache_dyn();

		virtual ::String makeCacheKey( Dynamic x);
		Dynamic makeCacheKey_dyn();

		virtual ::String getLockMode( );
		Dynamic getLockMode_dyn();

		virtual ::sys::db::Connection getCnx( );
		Dynamic getCnx_dyn();

		virtual Dynamic unsafeObject( ::String sql,bool lock);
		Dynamic unsafeObject_dyn();

		virtual ::sys::db::ResultSet unsafeExecute( ::String sql);
		Dynamic unsafeExecute_dyn();

		virtual Void addKeys( ::StringBuf s,Dynamic x);
		Dynamic addKeys_dyn();

		virtual ::String quoteField( ::String f);
		Dynamic quoteField_dyn();

		virtual Void unmake( Dynamic x);
		Dynamic unmake_dyn();

		virtual Void make( Dynamic x);
		Dynamic make_dyn();

		virtual Dynamic cacheObject( Dynamic x,bool lock);
		Dynamic cacheObject_dyn();

		virtual ::haxe::io::Bytes doSerialize( ::String field,Dynamic v);
		Dynamic doSerialize_dyn();

		virtual ::String objectToString( Dynamic it);
		Dynamic objectToString_dyn();

		virtual Void doLock( Dynamic i);
		Dynamic doLock_dyn();

		virtual Void doDelete( Dynamic x);
		Dynamic doDelete_dyn();

		virtual Void doUpdate( Dynamic x);
		Dynamic doUpdate_dyn();

		virtual Void doInsert( Dynamic x);
		Dynamic doInsert_dyn();

		virtual ::haxe::io::Bytes doUpdateCache( Dynamic x,::String name,Dynamic v);
		Dynamic doUpdateCache_dyn();

		Dynamic class_proto;
		Array< ::String > table_keys;
		::String table_name;
		Dynamic table_infos;
		static ::sys::db::Connection cnx;
		static ::String lockMode;
		static ::haxe::ds::StringMap object_cache;
		static ::haxe::ds::StringMap KEYWORDS;
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Manager */ 
