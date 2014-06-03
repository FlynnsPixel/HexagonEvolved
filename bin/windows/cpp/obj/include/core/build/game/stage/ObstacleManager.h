#ifndef INCLUDED_core_build_game_stage_ObstacleManager
#define INCLUDED_core_build_game_stage_ObstacleManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,stage,Obstacle)
HX_DECLARE_CLASS4(core,build,game,stage,ObstacleManager)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace stage{


class HXCPP_CLASS_ATTRIBUTES  ObstacleManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObstacleManager_obj OBJ_;
		ObstacleManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ObstacleManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ObstacleManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ObstacleManager"); }

		virtual Void createobstacle( int obstaclerotation);
		Dynamic createobstacle_dyn();

		virtual Void removeobstacles( );
		Dynamic removeobstacles_dyn();

		virtual Void reverseobstacles( hx::Null< bool >  reverseonly);
		Dynamic reverseobstacles_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool pausespawning;
		Float obstaclespeed;
		int obstaclerate;
		int obstacletimer;
		Array< ::Dynamic > obstacles;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace stage

#endif /* INCLUDED_core_build_game_stage_ObstacleManager */ 
