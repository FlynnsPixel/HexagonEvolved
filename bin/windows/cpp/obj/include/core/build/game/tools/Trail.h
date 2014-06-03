#ifndef INCLUDED_core_build_game_tools_Trail
#define INCLUDED_core_build_game_tools_Trail

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,tools,Trail)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Trail_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Trail_obj OBJ_;
		Trail_obj();
		Void __construct(::flash::display::BitmapData image,Float posx,Float posy,Float speed);

	public:
		static hx::ObjectPtr< Trail_obj > __new(::flash::display::BitmapData image,Float posx,Float posy,Float speed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Trail_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Trail"); }

		virtual Void removeall( );
		Dynamic removeall_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		Float rotation;
		Float beginalpha;
		bool movemap;
		Dynamic parent;
		::flash::display::BitmapData trailimage;
		Float fadespeed;
		bool pause;
		Array< ::Dynamic > trails;
		Float y;
		Float x;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools

#endif /* INCLUDED_core_build_game_tools_Trail */ 
