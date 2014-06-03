#ifndef INCLUDED_core_build_game_stage_StageManager
#define INCLUDED_core_build_game_stage_StageManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,stage,StageManager)
HX_DECLARE_CLASS4(core,build,game,tools,ColourChanger)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace core{
namespace build{
namespace game{
namespace stage{


class HXCPP_CLASS_ATTRIBUTES  StageManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StageManager_obj OBJ_;
		StageManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< StageManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StageManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StageManager"); }

		virtual Void secondschanged( );
		Dynamic secondschanged_dyn();

		virtual Void updatelevelvalues( );
		Dynamic updatelevelvalues_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void draw( hx::Null< bool >  playsound);
		Dynamic draw_dyn();

		virtual Void create( );
		Dynamic create_dyn();

		int hexagondir;
		Float hexagontimer;
		int rotatedirdest;
		int rotatedirtimer;
		Float rotationdirection;
		bool ingame;
		int gamemode;
		int mode;
		int midy;
		int midx;
		int incrementangle;
		Float increment;
		::flash::geom::Point point;
		::flash::geom::Rectangle rect;
		int sectors;
		bool pause;
		int hittimer;
		bool hit;
		::core::build::game::tools::ColourChanger colourchanger;
		::flash::display::Shape hexagon;
		::flash::display::BitmapData canvasdata;
		::flash::display::Bitmap canvas;
		::flash::display::Sprite container;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace stage

#endif /* INCLUDED_core_build_game_stage_StageManager */ 
