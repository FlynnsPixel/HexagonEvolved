#ifndef INCLUDED_core_build_game_managers_AssetManager
#define INCLUDED_core_build_game_managers_AssetManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core,build,game,managers,AssetManager)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,media,SoundChannel)
HX_DECLARE_CLASS2(flash,media,SoundTransform)
HX_DECLARE_CLASS2(flash,text,Font)
namespace core{
namespace build{
namespace game{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  AssetManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetManager_obj OBJ_;
		AssetManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AssetManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AssetManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetManager"); }

		virtual Void stopsfx( );
		Dynamic stopsfx_dyn();

		virtual Void playsfx( int id);
		Dynamic playsfx_dyn();

		virtual Void stopsound( );
		Dynamic stopsound_dyn();

		virtual Void playsound( int id,hx::Null< bool >  force);
		Dynamic playsound_dyn();

		::flash::media::SoundTransform sfxtransform;
		::flash::media::SoundChannel sfxchannel;
		::flash::media::Sound mouseover;
		::flash::media::Sound select;
		::flash::media::Sound enterexplosion;
		::flash::media::Sound explosion;
		Array< ::Dynamic > sfxlist;
		::flash::media::Sound currentlyplaying;
		::flash::media::SoundTransform soundtransform;
		::flash::media::SoundChannel soundchannel;
		::flash::media::Sound disco;
		::flash::media::Sound chiptune;
		::flash::media::Sound normalise;
		::flash::media::Sound alienate;
		::flash::media::Sound hexagoncore;
		::flash::media::Sound juicyfruit;
		Array< ::Dynamic > musiclist;
		::flash::text::Font kenpixelfont;
		::flash::display::BitmapData timerbackground;
		::flash::display::BitmapData buttonclicked;
		::flash::display::BitmapData button;
};

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers

#endif /* INCLUDED_core_build_game_managers_AssetManager */ 
