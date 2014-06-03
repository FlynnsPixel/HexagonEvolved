#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Object
#include <sys/db/Object.h>
#endif
#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{

Void Manager_obj::__construct()
{
	return null();
}

Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new()
{  hx::ObjectPtr< Manager_obj > result = new Manager_obj();
	result->__construct();
	return result;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > result = new Manager_obj();
	result->__construct();
	return result;}

Dynamic Manager_obj::getFromCache( Dynamic x,bool lock){
	HX_STACK_PUSH("Manager::getFromCache","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",595);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(lock,"lock");
	HX_STACK_LINE(596)
	Dynamic c = ::sys::db::Manager_obj::object_cache->get(this->makeCacheKey(x));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(597)
	if (((bool((bool((c != null())) && bool(lock))) && bool(!(c->__Field(HX_CSTRING("_lock"),true)))))){
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Reflect_obj::fields(c);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(599)
			while(((_g < _g1->length))){
				HX_STACK_LINE(599)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(599)
				++(_g);
				HX_STACK_LINE(600)
				::Reflect_obj::deleteField(c,f);
			}
		}
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Reflect_obj::fields(x);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(601)
			while(((_g < _g1->length))){
				HX_STACK_LINE(601)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(601)
				++(_g);
				HX_STACK_LINE(602)
				if (((c != null()))){
					HX_STACK_LINE(602)
					c->__SetField(f,::Reflect_obj::field(x,f),false);
				}
			}
		}
		HX_STACK_LINE(604)
		c->__FieldRef(HX_CSTRING("_lock")) = true;
		HX_STACK_LINE(607)
		c->__FieldRef(HX_CSTRING("_manager")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(610)
		if (((c != null()))){
			HX_STACK_LINE(610)
			c->__SetField(HX_CSTRING("__cache__"),x,false);
		}
		HX_STACK_LINE(612)
		this->make(c);
	}
	HX_STACK_LINE(614)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,getFromCache,return )

Void Manager_obj::removeFromCache( Dynamic x){
{
		HX_STACK_PUSH("Manager::removeFromCache","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",587);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(587)
		::sys::db::Manager_obj::object_cache->remove(this->makeCacheKey(x));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,removeFromCache,(void))

Void Manager_obj::addToCache( Dynamic x){
{
		HX_STACK_PUSH("Manager::addToCache","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",583);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(583)
		::sys::db::Manager_obj::object_cache->set(this->makeCacheKey(x),x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,addToCache,(void))

::String Manager_obj::makeCacheKey( Dynamic x){
	HX_STACK_PUSH("Manager::makeCacheKey","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",564);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(565)
	if (((this->table_keys->length == (int)1))){
		HX_STACK_LINE(566)
		Dynamic k = ::Reflect_obj::field(x,this->table_keys->__get((int)0));		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(567)
		if (((k == null()))){
			HX_STACK_LINE(568)
			hx::Throw ((HX_CSTRING("Missing key ") + this->table_keys->__get((int)0)));
		}
		HX_STACK_LINE(569)
		return (::Std_obj::string(k) + this->table_name);
	}
	HX_STACK_LINE(571)
	::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(572)
	{
		HX_STACK_LINE(572)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(572)
		while(((_g < _g1->length))){
			HX_STACK_LINE(572)
			::String k = _g1->__get(_g);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(572)
			++(_g);
			HX_STACK_LINE(573)
			Dynamic v = ::Reflect_obj::field(x,k);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(574)
			if (((k == null()))){
				HX_STACK_LINE(575)
				hx::Throw ((HX_CSTRING("Missing key ") + k));
			}
			HX_STACK_LINE(576)
			s->add(v);
			HX_STACK_LINE(577)
			s->add(HX_CSTRING("#"));
		}
	}
	HX_STACK_LINE(579)
	s->add(this->table_name);
	HX_STACK_LINE(580)
	return s->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,makeCacheKey,return )

::String Manager_obj::getLockMode( ){
	HX_STACK_PUSH("Manager::getLockMode","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",477);
	HX_STACK_THIS(this);
	HX_STACK_LINE(477)
	return ::sys::db::Manager_obj::lockMode;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getLockMode,return )

::sys::db::Connection Manager_obj::getCnx( ){
	HX_STACK_PUSH("Manager::getCnx","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",473);
	HX_STACK_THIS(this);
	HX_STACK_LINE(473)
	return ::sys::db::Manager_obj::cnx;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getCnx,return )

Dynamic Manager_obj::unsafeObject( ::String sql,bool lock){
	HX_STACK_PUSH("Manager::unsafeObject","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sql,"sql");
	HX_STACK_ARG(lock,"lock");
	HX_STACK_LINE(354)
	if (((lock != false))){
		HX_STACK_LINE(355)
		lock = true;
		HX_STACK_LINE(356)
		hx::AddEq(sql,this->getLockMode());
	}
	HX_STACK_LINE(358)
	Dynamic r = this->unsafeExecute(sql)->next();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(359)
	if (((r == null()))){
		HX_STACK_LINE(360)
		return null();
	}
	HX_STACK_LINE(361)
	Dynamic c = this->getFromCache(r,lock);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(362)
	if (((c != null()))){
		HX_STACK_LINE(363)
		return c;
	}
	HX_STACK_LINE(364)
	r = this->cacheObject(r,lock);
	HX_STACK_LINE(365)
	this->make(r);
	HX_STACK_LINE(366)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,unsafeObject,return )

::sys::db::ResultSet Manager_obj::unsafeExecute( ::String sql){
	HX_STACK_PUSH("Manager::unsafeExecute","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sql,"sql");
	HX_STACK_LINE(349)
	return this->getCnx()->request(sql);
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unsafeExecute,return )

Void Manager_obj::addKeys( ::StringBuf s,Dynamic x){
{
		HX_STACK_PUSH("Manager::addKeys","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(334)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(335)
			while(((_g < _g1->length))){
				HX_STACK_LINE(335)
				::String k = _g1->__get(_g);		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(335)
				++(_g);
				HX_STACK_LINE(336)
				if ((first)){
					HX_STACK_LINE(337)
					first = false;
				}
				else{
					HX_STACK_LINE(339)
					s->add(HX_CSTRING(" AND "));
				}
				HX_STACK_LINE(340)
				s->add(this->quoteField(k));
				HX_STACK_LINE(341)
				s->add(HX_CSTRING(" = "));
				HX_STACK_LINE(342)
				Dynamic f = ::Reflect_obj::field(x,k);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(343)
				if (((f == null()))){
					HX_STACK_LINE(344)
					hx::Throw ((HX_CSTRING("Missing key ") + k));
				}
				HX_STACK_LINE(345)
				this->getCnx()->addValue(s,f);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,addKeys,(void))

::String Manager_obj::quoteField( ::String f){
	HX_STACK_PUSH("Manager::quoteField","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",329);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(329)
	return (  ((::sys::db::Manager_obj::KEYWORDS->exists(f.toLowerCase()))) ? ::String(((HX_CSTRING("`") + f) + HX_CSTRING("`"))) : ::String(f) );
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,quoteField,return )

Void Manager_obj::unmake( Dynamic x){
{
		HX_STACK_PUSH("Manager::unmake","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",326);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unmake,(void))

Void Manager_obj::make( Dynamic x){
{
		HX_STACK_PUSH("Manager::make","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",323);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,make,(void))

Dynamic Manager_obj::cacheObject( Dynamic x,bool lock){
	HX_STACK_PUSH("Manager::cacheObject","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",307);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(lock,"lock");
	HX_STACK_LINE(312)
	Dynamic o = ::Type_obj::createEmptyInstance(this->class_proto);		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::String > _g1 = ::Reflect_obj::fields(x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(313)
		while(((_g < _g1->length))){
			HX_STACK_LINE(313)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(313)
			++(_g);
			HX_STACK_LINE(314)
			if (((o != null()))){
				HX_STACK_LINE(314)
				o->__SetField(f,::Reflect_obj::field(x,f),false);
			}
		}
	}
	HX_STACK_LINE(315)
	o->__FieldRef(HX_CSTRING("_manager")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(317)
	if (((o != null()))){
		HX_STACK_LINE(317)
		o->__SetField(HX_CSTRING("__cache__"),x,false);
	}
	HX_STACK_LINE(318)
	this->addToCache(o);
	HX_STACK_LINE(319)
	o->__FieldRef(HX_CSTRING("_lock")) = lock;
	HX_STACK_LINE(320)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,cacheObject,return )

::haxe::io::Bytes Manager_obj::doSerialize( ::String field,Dynamic v){
	HX_STACK_PUSH("Manager::doSerialize","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(field,"field");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(280)
	::haxe::Serializer s = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(281)
	s->useEnumIndex = true;
	HX_STACK_LINE(282)
	s->serialize(v);
	HX_STACK_LINE(283)
	::String str = s->toString();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(287)
	return ::haxe::io::Bytes_obj::ofString(str);
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,doSerialize,return )

::String Manager_obj::objectToString( Dynamic it){
	HX_STACK_PUSH("Manager::objectToString","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(it,"it");
	HX_STACK_LINE(257)
	::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(258)
	s->add(this->table_name);
	HX_STACK_LINE(259)
	if (((this->table_keys->length == (int)1))){
		HX_STACK_LINE(260)
		s->add(HX_CSTRING("#"));
		HX_STACK_LINE(261)
		s->add(::Reflect_obj::field(it,this->table_keys->__get((int)0)));
	}
	else{
		HX_STACK_LINE(263)
		s->add(HX_CSTRING("("));
		HX_STACK_LINE(264)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(265)
			while(((_g < _g1->length))){
				HX_STACK_LINE(265)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(265)
				++(_g);
				HX_STACK_LINE(266)
				if ((first)){
					HX_STACK_LINE(267)
					first = false;
				}
				else{
					HX_STACK_LINE(269)
					s->add(HX_CSTRING(","));
				}
				HX_STACK_LINE(270)
				s->add(this->quoteField(f));
				HX_STACK_LINE(271)
				s->add(HX_CSTRING(":"));
				HX_STACK_LINE(272)
				s->add(::Reflect_obj::field(it,f));
			}
		}
		HX_STACK_LINE(274)
		s->add(HX_CSTRING(")"));
	}
	HX_STACK_LINE(276)
	return s->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,objectToString,return )

Void Manager_obj::doLock( Dynamic i){
{
		HX_STACK_PUSH("Manager::doLock","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(244)
		if ((i->__Field(HX_CSTRING("_lock"),true))){
			HX_STACK_LINE(245)
			return null();
		}
		HX_STACK_LINE(246)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(247)
		s->add(HX_CSTRING("SELECT * FROM "));
		HX_STACK_LINE(248)
		s->add(this->table_name);
		HX_STACK_LINE(249)
		s->add(HX_CSTRING(" WHERE "));
		HX_STACK_LINE(250)
		this->addKeys(s,i);
		HX_STACK_LINE(252)
		if (((this->unsafeObject(s->b->join(HX_CSTRING("")),true) != i))){
			HX_STACK_LINE(253)
			hx::Throw (HX_CSTRING("Could not lock object (was deleted ?); try restarting transaction"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doLock,(void))

Void Manager_obj::doDelete( Dynamic x){
{
		HX_STACK_PUSH("Manager::doDelete","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",233);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(234)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(235)
		s->add(HX_CSTRING("DELETE FROM "));
		HX_STACK_LINE(236)
		s->add(this->table_name);
		HX_STACK_LINE(237)
		s->add(HX_CSTRING(" WHERE "));
		HX_STACK_LINE(238)
		this->addKeys(s,x);
		HX_STACK_LINE(239)
		this->unsafeExecute(s->b->join(HX_CSTRING("")));
		HX_STACK_LINE(240)
		this->removeFromCache(x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doDelete,(void))

Void Manager_obj::doUpdate( Dynamic x){
{
		HX_STACK_PUSH("Manager::doUpdate","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(195)
		if ((!(x->__Field(HX_CSTRING("_lock"),true)))){
			HX_STACK_LINE(196)
			hx::Throw (HX_CSTRING("Cannot update a not locked object"));
		}
		HX_STACK_LINE(197)
		this->unmake(x);
		HX_STACK_LINE(198)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(199)
		s->add(HX_CSTRING("UPDATE "));
		HX_STACK_LINE(200)
		s->add(this->table_name);
		HX_STACK_LINE(201)
		s->add(HX_CSTRING(" SET "));
		HX_STACK_LINE(202)
		Dynamic cache = ::Reflect_obj::field(x,HX_CSTRING("__cache__"));		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(203)
		bool mod = false;		HX_STACK_VAR(mod,"mod");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = this->table_infos->__Field(HX_CSTRING("fields"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(204)
				Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(204)
				++(_g);
				HX_STACK_LINE(205)
				::String name = f->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(206)
				Dynamic v = ::Reflect_obj::field(x,name);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(207)
				Dynamic vc = ::Reflect_obj::field(cache,name);		HX_STACK_VAR(vc,"vc");
				struct _Function_3_1{
					inline static bool Block( Dynamic &f){
						HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",208);
						{
							HX_STACK_LINE(208)
							{
								::sys::db::RecordType _switch_1 = (f->__Field(HX_CSTRING("t"),true));
								switch((_switch_1)->GetIndex()){
									case 16: case 22: case 17: case 19: case 18: {
										HX_STACK_LINE(208)
										return true;
									}
									;break;
									default: {
										HX_STACK_LINE(208)
										return false;
									}
								}
							}
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Dynamic &v,Dynamic &vc){
						HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",208);
						{
							HX_STACK_LINE(208)
							::haxe::io::Bytes a = v;		HX_STACK_VAR(a,"a");
							::haxe::io::Bytes b = vc;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(208)
							return (bool((a != b)) && bool(((bool((bool((a == null())) || bool((b == null())))) || bool((a->compare(b) != (int)0))))));
						}
						return null();
					}
				};
				HX_STACK_LINE(208)
				if (((bool((v != vc)) && bool(((bool(!(_Function_3_1::Block(f))) || bool(_Function_3_2::Block(v,vc)))))))){
					HX_STACK_LINE(209)
					{
						::sys::db::RecordType _switch_2 = (f->__Field(HX_CSTRING("t"),true));
						switch((_switch_2)->GetIndex()){
							case 30: {
								HX_STACK_LINE(211)
								v = this->doUpdateCache(x,name,v);
								struct _Function_5_1{
									inline static bool Block( Dynamic &v,Dynamic &vc){
										HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",212);
										{
											HX_STACK_LINE(212)
											::haxe::io::Bytes a = v;		HX_STACK_VAR(a,"a");
											::haxe::io::Bytes b = vc;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(212)
											return (bool((a != b)) && bool(((bool((bool((a == null())) || bool((b == null())))) || bool((a->compare(b) != (int)0))))));
										}
										return null();
									}
								};
								HX_STACK_LINE(212)
								if ((!(_Function_5_1::Block(v,vc)))){
									HX_STACK_LINE(213)
									continue;
								}
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(216)
					if ((mod)){
						HX_STACK_LINE(217)
						s->add(HX_CSTRING(", "));
					}
					else{
						HX_STACK_LINE(219)
						mod = true;
					}
					HX_STACK_LINE(220)
					s->add(this->quoteField(name));
					HX_STACK_LINE(221)
					s->add(HX_CSTRING(" = "));
					HX_STACK_LINE(222)
					this->getCnx()->addValue(s,v);
					HX_STACK_LINE(223)
					if (((cache != null()))){
						HX_STACK_LINE(223)
						cache->__SetField(name,v,false);
					}
				}
			}
		}
		HX_STACK_LINE(226)
		if ((!(mod))){
			HX_STACK_LINE(227)
			return null();
		}
		HX_STACK_LINE(228)
		s->add(HX_CSTRING(" WHERE "));
		HX_STACK_LINE(229)
		this->addKeys(s,x);
		HX_STACK_LINE(230)
		this->unsafeExecute(s->b->join(HX_CSTRING("")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doUpdate,(void))

Void Manager_obj::doInsert( Dynamic x){
{
		HX_STACK_PUSH("Manager::doInsert","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(128)
		this->unmake(x);
		HX_STACK_LINE(129)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(130)
		::List fields = ::List_obj::__new();		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(131)
		::List values = ::List_obj::__new();		HX_STACK_VAR(values,"values");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = this->table_infos->__Field(HX_CSTRING("fields"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(132)
				Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(132)
				++(_g);
				HX_STACK_LINE(133)
				::String name = f->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(134)
				::haxe::io::Bytes v = ::Reflect_obj::field(x,name);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(135)
				if (((v != null()))){
					HX_STACK_LINE(136)
					fields->add(this->quoteField(name));
					HX_STACK_LINE(137)
					{
						::sys::db::RecordType _switch_3 = (f->__Field(HX_CSTRING("t"),true));
						switch((_switch_3)->GetIndex()){
							case 30: {
								HX_STACK_LINE(138)
								v = this->doUpdateCache(x,name,v);
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(141)
					values->add(v);
				}
				else{
					HX_STACK_LINE(142)
					if ((!(f->__Field(HX_CSTRING("isNull"),true)))){
						HX_STACK_LINE(142)
						{
							::sys::db::RecordType _switch_4 = (f->__Field(HX_CSTRING("t"),true));
							switch((_switch_4)->GetIndex()){
								case 3: case 24: case 1: case 6: case 7: case 23: case 5: case 25: case 26: case 27: case 28: case 29: case 31: {
									HX_STACK_LINE(145)
									if (((x != null()))){
										HX_STACK_LINE(146)
										x->__SetField(name,(int)0,false);
									}
								}
								;break;
								case 8: {
									HX_STACK_LINE(147)
									if (((x != null()))){
										HX_STACK_LINE(148)
										x->__SetField(name,false,false);
									}
								}
								;break;
								case 13: case 15: case 9: case 14: case 21: {
									HX_STACK_LINE(149)
									if (((x != null()))){
										HX_STACK_LINE(150)
										x->__SetField(name,HX_CSTRING(""),false);
									}
								}
								;break;
								case 16: case 22: case 17: case 19: case 18: {
									HX_STACK_LINE(151)
									if (((x != null()))){
										HX_STACK_LINE(152)
										x->__SetField(name,::haxe::io::Bytes_obj::alloc((int)0),false);
									}
								}
								;break;
								case 10: case 11: case 12: {
								}
								;break;
								case 0: case 2: case 4: case 33: case 32: case 20: case 30: {
								}
								;break;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(160)
		s->add(HX_CSTRING("INSERT INTO "));
		HX_STACK_LINE(161)
		s->add(this->table_name);
		HX_STACK_LINE(162)
		s->add(HX_CSTRING(" ("));
		HX_STACK_LINE(163)
		s->add(fields->join(HX_CSTRING(",")));
		HX_STACK_LINE(164)
		s->add(HX_CSTRING(") VALUES ("));
		HX_STACK_LINE(165)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(166)
		for(::cpp::FastIterator_obj< ::haxe::io::Bytes > *__it = ::cpp::CreateFastIterator< ::haxe::io::Bytes >(values->iterator());  __it->hasNext(); ){
			::haxe::io::Bytes v = __it->next();
			{
				HX_STACK_LINE(167)
				if ((first)){
					HX_STACK_LINE(168)
					first = false;
				}
				else{
					HX_STACK_LINE(170)
					s->add(HX_CSTRING(", "));
				}
				HX_STACK_LINE(171)
				this->getCnx()->addValue(s,v);
			}
;
		}
		HX_STACK_LINE(173)
		s->add(HX_CSTRING(")"));
		HX_STACK_LINE(174)
		this->unsafeExecute(s->b->join(HX_CSTRING("")));
		HX_STACK_LINE(175)
		x->__FieldRef(HX_CSTRING("_lock")) = true;
		HX_STACK_LINE(177)
		if (((bool((this->table_keys->length == (int)1)) && bool((::Reflect_obj::field(x,this->table_keys->__get((int)0)) == null()))))){
			HX_STACK_LINE(178)
			if (((x != null()))){
				HX_STACK_LINE(178)
				x->__SetField(this->table_keys->__get((int)0),this->getCnx()->lastInsertId(),false);
			}
		}
		HX_STACK_LINE(179)
		this->addToCache(x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doInsert,(void))

::haxe::io::Bytes Manager_obj::doUpdateCache( Dynamic x,::String name,Dynamic v){
	HX_STACK_PUSH("Manager::doUpdateCache","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(116)
	Dynamic cache = ::Reflect_obj::field(x,(HX_CSTRING("cache_") + name));		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(119)
	if (((cache == null()))){
		HX_STACK_LINE(120)
		return v;
	}
	HX_STACK_LINE(121)
	::haxe::io::Bytes v1 = this->doSerialize(name,cache->__Field(HX_CSTRING("v"),true));		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(124)
	return v1;
}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,doUpdateCache,return )

::sys::db::Connection Manager_obj::cnx;

::String Manager_obj::lockMode;

::haxe::ds::StringMap Manager_obj::object_cache;

::haxe::ds::StringMap Manager_obj::KEYWORDS;


Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(class_proto,"class_proto");
	HX_MARK_MEMBER_NAME(table_keys,"table_keys");
	HX_MARK_MEMBER_NAME(table_name,"table_name");
	HX_MARK_MEMBER_NAME(table_infos,"table_infos");
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(class_proto,"class_proto");
	HX_VISIT_MEMBER_NAME(table_keys,"table_keys");
	HX_VISIT_MEMBER_NAME(table_name,"table_name");
	HX_VISIT_MEMBER_NAME(table_infos,"table_infos");
}

Dynamic Manager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { return cnx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getCnx") ) { return getCnx_dyn(); }
		if (HX_FIELD_EQ(inName,"unmake") ) { return unmake_dyn(); }
		if (HX_FIELD_EQ(inName,"doLock") ) { return doLock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { return addKeys_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lockMode") ) { return lockMode; }
		if (HX_FIELD_EQ(inName,"KEYWORDS") ) { return KEYWORDS; }
		if (HX_FIELD_EQ(inName,"doDelete") ) { return doDelete_dyn(); }
		if (HX_FIELD_EQ(inName,"doUpdate") ) { return doUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"doInsert") ) { return doInsert_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToCache") ) { return addToCache_dyn(); }
		if (HX_FIELD_EQ(inName,"quoteField") ) { return quoteField_dyn(); }
		if (HX_FIELD_EQ(inName,"table_keys") ) { return table_keys; }
		if (HX_FIELD_EQ(inName,"table_name") ) { return table_name; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLockMode") ) { return getLockMode_dyn(); }
		if (HX_FIELD_EQ(inName,"cacheObject") ) { return cacheObject_dyn(); }
		if (HX_FIELD_EQ(inName,"doSerialize") ) { return doSerialize_dyn(); }
		if (HX_FIELD_EQ(inName,"class_proto") ) { return class_proto; }
		if (HX_FIELD_EQ(inName,"table_infos") ) { return table_infos; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_cache") ) { return object_cache; }
		if (HX_FIELD_EQ(inName,"getFromCache") ) { return getFromCache_dyn(); }
		if (HX_FIELD_EQ(inName,"makeCacheKey") ) { return makeCacheKey_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeObject") ) { return unsafeObject_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unsafeExecute") ) { return unsafeExecute_dyn(); }
		if (HX_FIELD_EQ(inName,"doUpdateCache") ) { return doUpdateCache_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectToString") ) { return objectToString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeFromCache") ) { return removeFromCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Manager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lockMode") ) { lockMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYWORDS") ) { KEYWORDS=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"table_keys") ) { table_keys=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"table_name") ) { table_name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"class_proto") ) { class_proto=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"table_infos") ) { table_infos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_cache") ) { object_cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("class_proto"));
	outFields->push(HX_CSTRING("table_keys"));
	outFields->push(HX_CSTRING("table_name"));
	outFields->push(HX_CSTRING("table_infos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cnx"),
	HX_CSTRING("lockMode"),
	HX_CSTRING("object_cache"),
	HX_CSTRING("KEYWORDS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFromCache"),
	HX_CSTRING("removeFromCache"),
	HX_CSTRING("addToCache"),
	HX_CSTRING("makeCacheKey"),
	HX_CSTRING("getLockMode"),
	HX_CSTRING("getCnx"),
	HX_CSTRING("unsafeObject"),
	HX_CSTRING("unsafeExecute"),
	HX_CSTRING("addKeys"),
	HX_CSTRING("quoteField"),
	HX_CSTRING("unmake"),
	HX_CSTRING("make"),
	HX_CSTRING("cacheObject"),
	HX_CSTRING("doSerialize"),
	HX_CSTRING("objectToString"),
	HX_CSTRING("doLock"),
	HX_CSTRING("doDelete"),
	HX_CSTRING("doUpdate"),
	HX_CSTRING("doInsert"),
	HX_CSTRING("doUpdateCache"),
	HX_CSTRING("class_proto"),
	HX_CSTRING("table_keys"),
	HX_CSTRING("table_name"),
	HX_CSTRING("table_infos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Manager_obj::cnx,"cnx");
	HX_MARK_MEMBER_NAME(Manager_obj::lockMode,"lockMode");
	HX_MARK_MEMBER_NAME(Manager_obj::object_cache,"object_cache");
	HX_MARK_MEMBER_NAME(Manager_obj::KEYWORDS,"KEYWORDS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Manager_obj::cnx,"cnx");
	HX_VISIT_MEMBER_NAME(Manager_obj::lockMode,"lockMode");
	HX_VISIT_MEMBER_NAME(Manager_obj::object_cache,"object_cache");
	HX_VISIT_MEMBER_NAME(Manager_obj::KEYWORDS,"KEYWORDS");
};

Class Manager_obj::__mClass;

void Manager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Manager"), hx::TCanCast< Manager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Manager_obj::__boot()
{
	object_cache= ::haxe::ds::StringMap_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/sys/db/Manager.hx",42);
		{
			HX_STACK_LINE(43)
			::haxe::ds::StringMap h = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::String > _g1 = HX_CSTRING("ADD|ALL|ALTER|ANALYZE|AND|AS|ASC|ASENSITIVE|BEFORE|BETWEEN|BIGINT|BINARY|BLOB|BOTH|BY|CALL|CASCADE|CASE|CHANGE|CHAR|CHARACTER|CHECK|COLLATE|COLUMN|CONDITION|CONSTRAINT|CONTINUE|CONVERT|CREATE|CROSS|CURRENT_DATE|CURRENT_TIME|CURRENT_TIMESTAMP|CURRENT_USER|CURSOR|DATABASE|DATABASES|DAY_HOUR|DAY_MICROSECOND|DAY_MINUTE|DAY_SECOND|DEC|DECIMAL|DECLARE|DEFAULT|DELAYED|DELETE|DESC|DESCRIBE|DETERMINISTIC|DISTINCT|DISTINCTROW|DIV|DOUBLE|DROP|DUAL|EACH|ELSE|ELSEIF|ENCLOSED|ESCAPED|EXISTS|EXIT|EXPLAIN|FALSE|FETCH|FLOAT|FLOAT4|FLOAT8|FOR|FORCE|FOREIGN|FROM|FULLTEXT|GRANT|GROUP|HAVING|HIGH_PRIORITY|HOUR_MICROSECOND|HOUR_MINUTE|HOUR_SECOND|IF|IGNORE|IN|INDEX|INFILE|INNER|INOUT|INSENSITIVE|INSERT|INT|INT1|INT2|INT3|INT4|INT8|INTEGER|INTERVAL|INTO|IS|ITERATE|JOIN|KEY|KEYS|KILL|LEADING|LEAVE|LEFT|LIKE|LIMIT|LINES|LOAD|LOCALTIME|LOCALTIMESTAMP|LOCK|LONG|LONGBLOB|LONGTEXT|LOOP|LOW_PRIORITY|MATCH|MEDIUMBLOB|MEDIUMINT|MEDIUMTEXT|MIDDLEINT|MINUTE_MICROSECOND|MINUTE_SECOND|MOD|MODIFIES|NATURAL|NOT|NO_WRITE_TO_BINLOG|NULL|NUMERIC|ON|OPTIMIZE|OPTION|OPTIONALLY|OR|ORDER|OUT|OUTER|OUTFILE|PRECISION|PRIMARY|PROCEDURE|PURGE|READ|READS|REAL|REFERENCES|REGEXP|RELEASE|RENAME|REPEAT|REPLACE|REQUIRE|RESTRICT|RETURN|REVOKE|RIGHT|RLIKE|SCHEMA|SCHEMAS|SECOND_MICROSECOND|SELECT|SENSITIVE|SEPARATOR|SET|SHOW|SMALLINT|SONAME|SPATIAL|SPECIFIC|SQL|SQLEXCEPTION|SQLSTATE|SQLWARNING|SQL_BIG_RESULT|SQL_CALC_FOUND_ROWS|SQL_SMALL_RESULT|SSL|STARTING|STRAIGHT_JOIN|TABLE|TERMINATED|THEN|TINYBLOB|TINYINT|TINYTEXT|TO|TRAILING|TRIGGER|TRUE|UNDO|UNION|UNIQUE|UNLOCK|UNSIGNED|UPDATE|USAGE|USE|USING|UTC_DATE|UTC_TIME|UTC_TIMESTAMP|VALUES|VARBINARY|VARCHAR|VARCHARACTER|VARYING|WHEN|WHERE|WHILE|WITH|WRITE|XOR|YEAR_MONTH|ZEROFILL|ASENSITIVE|CALL|CONDITION|CONNECTION|CONTINUE|CURSOR|DECLARE|DETERMINISTIC|EACH|ELSEIF|EXIT|FETCH|GOTO|INOUT|INSENSITIVE|ITERATE|LABEL|LEAVE|LOOP|MODIFIES|OUT|READS|RELEASE|REPEAT|RETURN|SCHEMA|SCHEMAS|SENSITIVE|SPECIFIC|SQL|SQLEXCEPTION|SQLSTATE|SQLWARNING|TRIGGER|UNDO|UPGRADE|WHILE").split(HX_CSTRING("|"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(44)
				while(((_g < _g1->length))){
					HX_STACK_LINE(44)
					::String k = _g1->__get(_g);		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(44)
					++(_g);
					HX_STACK_LINE(45)
					h->set(k.toLowerCase(),true);
				}
			}
			HX_STACK_LINE(46)
			return h;
		}
		return null();
	}
};
	KEYWORDS= _Function_0_1::Block();
}

} // end namespace sys
} // end namespace db
