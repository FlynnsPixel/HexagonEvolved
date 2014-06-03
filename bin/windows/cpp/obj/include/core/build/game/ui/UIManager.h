#ifndef INCLUDED_core_build_game_ui_UIManager
#define INCLUDED_core_build_game_ui_UIManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,tools,ColourChanger)
HX_DECLARE_CLASS4(core,build,game,ui,EventButton)
HX_DECLARE_CLASS4(core,build,game,ui,UIManager)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
namespace core{
namespace build{
namespace game{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  UIManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UIManager_obj OBJ_;
		UIManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< UIManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~UIManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIManager"); }

		virtual Void updatetimertext( );
		Dynamic updatetimertext_dyn();

		virtual Void turn( );
		Dynamic turn_dyn();

		virtual Void updateblocktext( );
		Dynamic updateblocktext_dyn();

		virtual Void startgame( );
		Dynamic startgame_dyn();

		virtual Void removemenu( );
		Dynamic removemenu_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void createtimer( );
		Dynamic createtimer_dyn();

		virtual Void createmenu( );
		Dynamic createmenu_dyn();

		::String minutestext;
		::String secondstext;
		::String mstext;
		bool pausetimer;
		int minutes;
		int seconds;
		int ms;
		::flash::text::TextField timertext;
		::flash::display::Bitmap timerbackground;
		::flash::display::Sprite container;
		bool created;
		bool rngmode;
		Array< ::String > currentscore;
		Array< ::Dynamic > highscores;
		Array< ::String > difficultymodes;
		int index;
		::flash::text::TextField blocktext;
		::flash::display::Shape blackblock;
		::core::build::game::tools::ColourChanger colourchanger;
		::core::build::game::ui::EventButton startbutton;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace ui

#endif /* INCLUDED_core_build_game_ui_UIManager */ 
