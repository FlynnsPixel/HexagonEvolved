#ifndef INCLUDED_core_build_game_managers_Universe
#define INCLUDED_core_build_game_managers_Universe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,entities,Ship)
HX_DECLARE_CLASS4(core,build,game,managers,AssetManager)
HX_DECLARE_CLASS4(core,build,game,managers,KeyboardManager)
HX_DECLARE_CLASS4(core,build,game,managers,MouseManager)
HX_DECLARE_CLASS4(core,build,game,managers,ToolManager)
HX_DECLARE_CLASS4(core,build,game,managers,Universe)
HX_DECLARE_CLASS4(core,build,game,stage,ObstacleManager)
HX_DECLARE_CLASS4(core,build,game,stage,StageManager)
HX_DECLARE_CLASS4(core,build,game,ui,UIManager)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Universe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Universe_obj OBJ_;
		Universe_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Universe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Universe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Universe"); }

		static ::flash::display::Stage stage;
		static ::core::build::game::managers::AssetManager assets;
		static ::core::build::game::managers::KeyboardManager keyboard;
		static ::core::build::game::managers::MouseManager mouse;
		static ::core::build::game::managers::ToolManager tools;
		static ::core::build::game::entities::Ship player;
		static ::core::build::game::stage::StageManager stagemanager;
		static ::core::build::game::stage::ObstacleManager obstaclemanager;
		static ::core::build::game::ui::UIManager uimanager;
		static Void initiate( );
		static Dynamic initiate_dyn();

		static Void update( ::flash::events::Event event);
		static Dynamic update_dyn();

};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers

#endif /* INCLUDED_core_build_game_managers_Universe */ 
