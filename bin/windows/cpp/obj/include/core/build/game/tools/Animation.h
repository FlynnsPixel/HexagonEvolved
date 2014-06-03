#ifndef INCLUDED_core_build_game_tools_Animation
#define INCLUDED_core_build_game_tools_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,tools,Animation)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{
namespace build{
namespace game{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(Array< ::Dynamic > animationframes,int animationrate,::flash::display::Bitmap applytobase);

	public:
		static hx::ObjectPtr< Animation_obj > __new(Array< ::Dynamic > animationframes,int animationrate,::flash::display::Bitmap applytobase);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		virtual Void updateframe( );
		Dynamic updateframe_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		bool loop;
		bool pause;
		::flash::display::Bitmap target;
		int rate;
		int timer;
		int index;
		Array< ::Dynamic > frames;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace tools

#endif /* INCLUDED_core_build_game_tools_Animation */ 
