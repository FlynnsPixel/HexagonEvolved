#ifndef INCLUDED_core_build_game_managers_KeyboardManager
#define INCLUDED_core_build_game_managers_KeyboardManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,managers,KeyboardManager)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
namespace core{
namespace build{
namespace game{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  KeyboardManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyboardManager_obj OBJ_;
		KeyboardManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< KeyboardManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KeyboardManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KeyboardManager"); }

		virtual Void keyup( ::flash::events::KeyboardEvent event);
		Dynamic keyup_dyn();

		virtual Void keydown( ::flash::events::KeyboardEvent event);
		Dynamic keydown_dyn();

		virtual Void initiate( );
		Dynamic initiate_dyn();

		bool rightkeydown;
		bool leftkeydown;
		bool downkeydown;
		bool upkeydown;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers

#endif /* INCLUDED_core_build_game_managers_KeyboardManager */ 
