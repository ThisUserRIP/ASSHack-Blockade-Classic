#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct InputMapper; };
#include "Options_TargetMapping.h"
namespace Assembly_CSharp { struct Options_TargetMapping; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct Options_Row; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Rewired_Core::Rewired { struct InputMapper_InputMappedEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_StoppedEventData; };

namespace Assembly_CSharp
{
	struct Options : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		IL2CPP::Array<int32_t>* dist;
		int32_t respos;
		int32_t distpos;
		int32_t local_tileset;
		float local_sens;
		bool _local_light;
		int32_t local_light;
		bool _local_fullscreen;
		int32_t local_fullscreen;
		int32_t local_damage_popups;
		bool _local_damage_popups;
		int32_t local_crosshair_dot;
		int32_t local_crosshair_id;
		UnityEngine_CoreModule::UnityEngine::Color local_crossColor;
		bool saved;
		int32_t draw_type;
		IL2CPP::Array<bool>* hover_type;
		UnityEngine_CoreModule::UnityEngine::Vector2 mPos;
		Rewired_Core::Rewired::InputMapper* inputMapper_keyboard;
		Rewired_Core::Rewired::InputMapper* inputMapper_mouse;
		Assembly_CSharp::Options_TargetMapping _replaceTargetMapping;
		bool waitingButton;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::Options_Row>* rows;
		Rewired_Core::Rewired::ControllerType selectedControllerType;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollMPos;
		bool hover_save;
		struct StaticFields
		{
			mscorlib::System::String* category;
			mscorlib::System::String* layout;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::Player* get_player();
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		void myGlobalInit();
		void onActive();
		void InitializeInputs();
		void CreateInput(Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange actionRange, mscorlib::System::String* label);
		void OnDisable();
		void OnGUI();
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id, int32_t length);
		void DoWindow(int32_t windowID);
		void DrawCategory0();
		void DrawCategory1();
		void DrawHeader(UnityEngine_CoreModule::UnityEngine::Rect r, int32_t hID);
		void DrawActionRow(UnityEngine_CoreModule::UnityEngine::Rect r, mscorlib::System::String* aID, int32_t lID);
		void DrawSensitivity(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawTileSet(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawCrosshairDot(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void DrawCrosshairId(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void DrawCrosshairPrev(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawCrosshairColor(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void DrawLight(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawResolution(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void DrawDistance(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		void DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawDamagePopups(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawLanguage(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawSocialID(UnityEngine_CoreModule::UnityEngine::Rect r);
		void DrawButton();
		void OnInputFieldClicked(mscorlib::System::String* index, int32_t actionElementMapToReplaceId);
		mscorlib::System::Collections::IEnumerator* StartListeningDelayed(mscorlib::System::String* index, Rewired_Core::Rewired::ControllerMap* keyboardMap, Rewired_Core::Rewired::ControllerMap* mouseMap, int32_t actionElementMapToReplaceId);
		void OnInputMapped(Rewired_Core::Rewired::InputMapper_InputMappedEventData* data);
		void OnStopped(Rewired_Core::Rewired::InputMapper_StoppedEventData* data);
		void _ctor();
	};
}

