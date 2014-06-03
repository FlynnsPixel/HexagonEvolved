#ifndef INCLUDED_core_build_game_entities_Ship
#define INCLUDED_core_build_game_entities_Ship

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS4(core,build,game,entities,Ship)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Ship_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Ship_obj OBJ_;
		Ship_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Ship_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Ship_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ship"); }

		virtual Void calculateangle( Float lastdest);
		Dynamic calculateangle_dyn();

		virtual Void endmovement( );
		Dynamic endmovement_dyn();

		virtual bool obstaclecollision( );
		Dynamic obstaclecollision_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void create( );
		Dynamic create_dyn();

		Float destoffset;
		int rotationindex;
		bool adjusting;
		Float closestrotationoffset;
		Float angle;
		int movedelaytimer;
		bool moving;
		Float dest;
		::flash::display::Shape base;
		::flash::display::Sprite container;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace entities

#endif /* INCLUDED_core_build_game_entities_Ship */ 
