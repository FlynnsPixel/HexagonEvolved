#ifndef INCLUDED_core_build_game_ui_EventButton
#define INCLUDED_core_build_game_ui_EventButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS4(core,build,game,ui,EventButton)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(flash,text,TextField)
namespace core{
namespace build{
namespace game{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  EventButton_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef EventButton_obj OBJ_;
		EventButton_obj();
		Void __construct(::flash::display::BitmapData texture,::flash::display::BitmapData mouseovertexture,::String message,hx::Null< int >  __o_size,Dynamic clickfunction);

	public:
		static hx::ObjectPtr< EventButton_obj > __new(::flash::display::BitmapData texture,::flash::display::BitmapData mouseovertexture,::String message,hx::Null< int >  __o_size,Dynamic clickfunction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EventButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventButton"); }

		virtual Void mouseout( ::flash::events::MouseEvent event);
		Dynamic mouseout_dyn();

		virtual Void mouseover( ::flash::events::MouseEvent event);
		Dynamic mouseover_dyn();

		virtual Void mouseup( ::flash::events::MouseEvent event);
		Dynamic mouseup_dyn();

		virtual Void mousedown( ::flash::events::MouseEvent event);
		Dynamic mousedown_dyn();

		virtual Void touchout( ::flash::events::TouchEvent event);
		Dynamic touchout_dyn();

		virtual Void touchover( ::flash::events::TouchEvent event);
		Dynamic touchover_dyn();

		virtual Void touchend( ::flash::events::TouchEvent event);
		Dynamic touchend_dyn();

		virtual Void touchbegin( ::flash::events::TouchEvent event);
		Dynamic touchbegin_dyn();

		virtual Void remove( );
		Dynamic remove_dyn();

		Dynamic onclickfunction;
		Dynamic &onclickfunction_dyn() { return onclickfunction;}
		::flash::display::BitmapData texturedata;
		::flash::display::BitmapData mouseovertexturedata;
		::flash::text::TextField text;
		::flash::display::Bitmap base;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace ui

#endif /* INCLUDED_core_build_game_ui_EventButton */ 
