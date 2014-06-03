#ifndef INCLUDED_core_build_game_tools_Point2D
#define INCLUDED_core_build_game_tools_Point2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,tools,Point2D)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace core{
namespace build{
namespace game{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Point2D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point2D_obj OBJ_;
		Point2D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Point2D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Point2D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Point2D"); }

		::flash::geom::Point end;
		::flash::geom::Point start;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools

#endif /* INCLUDED_core_build_game_tools_Point2D */ 
