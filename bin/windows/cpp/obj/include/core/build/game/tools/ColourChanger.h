#ifndef INCLUDED_core_build_game_tools_ColourChanger
#define INCLUDED_core_build_game_tools_ColourChanger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,tools,ColourChanger)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
namespace core{
namespace build{
namespace game{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  ColourChanger_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColourChanger_obj OBJ_;
		ColourChanger_obj();
		Void __construct(::flash::display::DisplayObject applyTo,hx::Null< Float >  __o_colourSpeed,hx::Null< Float >  __o_maxItensity);

	public:
		static hx::ObjectPtr< ColourChanger_obj > __new(::flash::display::DisplayObject applyTo,hx::Null< Float >  __o_colourSpeed,hx::Null< Float >  __o_maxItensity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColourChanger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColourChanger"); }

		virtual Void revert( );
		Dynamic revert_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		bool reversed;
		::flash::display::DisplayObject container;
		Float maxrgb;
		Float rgbspeed;
		Float blueAdd;
		Float greenAdd;
		Float redAdd;
		::flash::geom::ColorTransform transform;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools

#endif /* INCLUDED_core_build_game_tools_ColourChanger */ 
