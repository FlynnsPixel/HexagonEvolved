#ifndef INCLUDED_core_build_game_managers_ToolManager
#define INCLUDED_core_build_game_managers_ToolManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,managers,ToolManager)
HX_DECLARE_CLASS4(core,build,game,tools,Animation)
HX_DECLARE_CLASS4(core,build,game,tools,Trail)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  ToolManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ToolManager_obj OBJ_;
		ToolManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ToolManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ToolManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ToolManager"); }

		virtual ::flash::display::BitmapData flip( ::flash::display::BitmapData data);
		Dynamic flip_dyn();

		virtual Void remove( Dynamic object,Dynamic from);
		Dynamic remove_dyn();

		virtual ::core::build::game::tools::Trail createtrail( ::flash::display::BitmapData image,Float x,Float y,hx::Null< Float >  fadespeed,hx::Null< bool >  autoupdate);
		Dynamic createtrail_dyn();

		virtual Array< ::Dynamic > cutspritesheet( ::flash::display::BitmapData sheet,Float width,Float height);
		Dynamic cutspritesheet_dyn();

		virtual ::core::build::game::tools::Animation createanimation( Array< ::Dynamic > frames,int rate,::flash::display::Bitmap applyto,hx::Null< bool >  autoupdate);
		Dynamic createanimation_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		Array< ::Dynamic > trails;
		Array< ::Dynamic > animations;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers

#endif /* INCLUDED_core_build_game_managers_ToolManager */ 
