#include <hxcpp.h>

#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Object
#include <sys/db/Object.h>
#endif
namespace sys{
namespace db{

Void Object_obj::__construct()
{
HX_STACK_PUSH("Object::new","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",35);
{
}
;
	return null();
}

Object_obj::~Object_obj() { }

Dynamic Object_obj::__CreateEmpty() { return  new Object_obj; }
hx::ObjectPtr< Object_obj > Object_obj::__new()
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct();
	return result;}

Dynamic Object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct();
	return result;}

::String Object_obj::toString( ){
	HX_STACK_PUSH("Object::toString","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->_manager->objectToString(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toString,return )

bool Object_obj::isLocked( ){
	HX_STACK_PUSH("Object::isLocked","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return this->_lock;
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,isLocked,return )

Void Object_obj::_delete( ){
{
		HX_STACK_PUSH("Object::delete","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		this->_manager->doDelete(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,_delete,(void))

Void Object_obj::lock( ){
{
		HX_STACK_PUSH("Object::lock","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		this->_manager->doLock(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,lock,(void))

Void Object_obj::update( ){
{
		HX_STACK_PUSH("Object::update","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		this->_manager->doUpdate(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,update,(void))

Void Object_obj::insert( ){
{
		HX_STACK_PUSH("Object::insert","C:\\HaxeToolkit\\haxe/std/sys/db/Object.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		this->_manager->doInsert(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,insert,(void))


Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(_manager,"_manager");
	HX_MARK_MEMBER_NAME(_lock,"_lock");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_manager,"_manager");
	HX_VISIT_MEMBER_NAME(_lock,"_lock");
}

Dynamic Object_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lock") ) { return _lock; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return _delete_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocked") ) { return isLocked_dyn(); }
		if (HX_FIELD_EQ(inName,"_manager") ) { return _manager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_manager"));
	outFields->push(HX_CSTRING("_lock"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("isLocked"),
	HX_CSTRING("delete"),
	HX_CSTRING("lock"),
	HX_CSTRING("update"),
	HX_CSTRING("insert"),
	HX_CSTRING("_manager"),
	HX_CSTRING("_lock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

Class Object_obj::__mClass;

void Object_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Object"), hx::TCanCast< Object_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Object_obj::__boot()
{
}

} // end namespace sys
} // end namespace db
