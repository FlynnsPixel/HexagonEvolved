#ifndef INCLUDED_core_build_game_stage_Obstacle
#define INCLUDED_core_build_game_stage_Obstacle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Shape.h>
HX_DECLARE_CLASS4(core,build,game,stage,Obstacle)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace stage{


class HXCPP_CLASS_ATTRIBUTES  Obstacle_obj : public ::flash::display::Shape_obj{
	public:
		typedef ::flash::display::Shape_obj super;
		typedef Obstacle_obj OBJ_;
		Obstacle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Obstacle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Obstacle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Obstacle"); }

		virtual bool calculatecollision( );
		Dynamic calculatecollision_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool reverse;
		int colour;
		Float speed;
		bool removed;
		Float offsetrotation;
		int length;
		Float distancey;
		Float distancex;
		int midy;
		int midx;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace stage

#endif /* INCLUDED_core_build_game_stage_Obstacle */ 
