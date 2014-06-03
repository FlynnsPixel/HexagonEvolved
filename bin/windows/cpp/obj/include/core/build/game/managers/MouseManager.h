#ifndef INCLUDED_core_build_game_managers_MouseManager
#define INCLUDED_core_build_game_managers_MouseManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,managers,MouseManager)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
namespace core{
namespace build{
namespace game{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  MouseManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseManager_obj OBJ_;
		MouseManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MouseManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MouseManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MouseManager"); }

		virtual Void mouseup( ::flash::events::MouseEvent event);
		Dynamic mouseup_dyn();

		virtual Void mousedown( ::flash::events::MouseEvent event);
		Dynamic mousedown_dyn();

		virtual Void touchup( ::flash::events::TouchEvent event);
		Dynamic touchup_dyn();

		virtual Void touchdown( ::flash::events::TouchEvent event);
		Dynamic touchdown_dyn();

		virtual Void initiate( );
		Dynamic initiate_dyn();

		bool mouseisdown;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers

#endif /* INCLUDED_core_build_game_managers_MouseManager */ 
