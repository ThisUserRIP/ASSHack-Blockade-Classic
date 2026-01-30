#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_PlayerMouse_MovementAreaUnit.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_Utils_Classes_Data_ScreenRect.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct ScreenRect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired { struct PlayerController_Axis; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerMouse_Definition; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseWheel; };
namespace Rewired_Core::Rewired { struct PlayerController_Button; };
#include "Rewired_UpdateLoopType.h"

namespace Rewired_Core::Rewired
{
	struct PlayerMouse : Rewired_Core::Rewired::PlayerController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t vthfdgGUzAxzrkwxhHsMYoUKwKQ;
		int32_t NkLErHwTuibxGliNXgRegHqceuke;
		int32_t jkkWXhliVKehNkAYHeYyEuuOaEOY;
		int32_t vxpQLqcFGcOpoCspWidGxgsdfxq;
		int32_t HPGOgITGBZfGmmgMbryDAJwJIgZ;
		int32_t CsmNBetPkqjTkxEKjgMRiCSiYOZe;
		bool dhAiJPfzmSKPkvIoNbTvPygiobe;
		UnityEngine_CoreModule::UnityEngine::Vector2 cTsSnPsFuIcjYWHHnxCFOFtFMQK;
		UnityEngine_CoreModule::UnityEngine::Vector2 dHwHzlFklHBokhziJSCrPoYobXwc;
		UnityEngine_CoreModule::UnityEngine::Vector2 DQoZGmPHcUbCvJRInoPnebpACSv;
		UnityEngine_CoreModule::UnityEngine::Vector2 TTpUwiJXhKpIZhJrEJMEAFHuVYr;
		UnityEngine_CoreModule::UnityEngine::Vector2 EyxOlkubNigdyRRZxQTGjJFvfdH;
		float AXARUoEKEdgDfzUUxsLfdBTSDwP;
		bool TXWyJlQGSoXaJqnBCmlSmgSbeVzF;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* hiowlxViRefxfcPSktRPFrJKJHQL;
		bool aydcuUAMjFiYjoNyaPQNQzNWUDO;
		Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect brdFrCwUlYDTQXeNvCUFbbpnzAQ;
		bool lRmuhtgxmWJSgedGROaSVXJxxNF;
		Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit ArBhJjzqdhPJJyfLPbGqWMNkIXD;
		struct StaticFields
		{
			bool qniRdKeDVKDhBfcvHoKbQQljgDYh;
			float AfVGnUBMKkEUNoVLEflxnsmbbXmB;
			bool FesEHjcQceEcXBglNippQRDaeWJ;
			bool YTztalqyYzsApNxMBSzPBgQKeiL;
			Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit tOciDQpatGZAbYgyHZJQBaktcZIF;
			int32_t KcjMxLDYubULjOpqiCgZBVPDWLaw;
			int32_t WpAVZmpPSeNAyisOfPeQZekfoDY;
			mscorlib::System::String* CJTZZKgDZrBufxoprDXssjYGnpN;
			mscorlib::System::String* xzgWmSaDpYCsgfLeQGcKjRpcPOnb;
			mscorlib::System::String* QjFRXTkTZJbhRKwGQineLzGvOmP;
			mscorlib::System::String* QtUKnPAwnJBPmArkMgoRSqtnVtA;
			mscorlib::System::String* nJiDqjzwGBhbnAMzSedtwdloUAl;
			mscorlib::System::String* sJLjwZrGiUunRnsulCarrSRiClA;
			mscorlib::System::String* dcZIlYeRtVcmwcPsFkVyTEBLgab;
			mscorlib::System::String* gQHRCPfOxUdgbGdlmMnuBfYEQhIb;
			mscorlib::System::String* KSbadagQZfzirfMzZbykHNRQat;
			Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect lOGrAHpVLWghELMcJCINsStALvn;
			mscorlib::System::Predicate_1<Rewired_Core::Rewired::PlayerController_Axis>* CliIySgnMlqtNdJpEJAMyPXLWxJ;
			mscorlib::System::Predicate_1<Rewired_Core::Rewired::PlayerController_Axis>* cavDohXxnmjmZcjteDXMghmhABZ;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::PlayerMouse_Definition* definition);
		bool get_defaultToCenter();
		void set_defaultToCenter(bool value);
		bool get_clampToMovementArea();
		void set_clampToMovementArea(bool value);
		Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect get_movementArea();
		void set_movementArea(Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect value);
		Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit get_movementAreaUnit();
		void set_movementAreaUnit(Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPosition();
		void set_screenPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionPrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionDelta();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_xAxis();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_yAxis();
		Rewired_Core::Rewired::PlayerController_MouseWheel* get_wheel();
		Rewired_Core::Rewired::PlayerController_Button* get_leftButton();
		Rewired_Core::Rewired::PlayerController_Button* get_rightButton();
		Rewired_Core::Rewired::PlayerController_Button* get_middleButton();
		float get_pointerSpeed();
		void set_pointerSpeed(float value);
		bool get_useHardwarePointerPosition();
		void set_useHardwarePointerPosition(bool value);
		void add_ScreenPositionChangedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void remove_ScreenPositionChangedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		bool Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void UpdateFinished();
		void ClearVars();
		void bOqgVxnfOeHhGOMWCHfSXeOOxYY(UnityEngine_CoreModule::UnityEngine::Vector2 A_1);
		Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect ZkHxKVQaacFRwibhFCOeeFuBCCf();
		void XutgLuhHfYvBrqHfHewwxRKylptm();
		static float qIhrzMbIdYEzpxPaoiZZbhmHIjb(Rewired_Core::Rewired::PlayerController_Axis* A_0, float A_1, float A_2);
		bool Rewired_UI_IMouseInputSource_get_enabled();
		bool Rewired_UI_IMouseInputSource_GetButtonDown(int32_t A_1);
		bool Rewired_UI_IMouseInputSource_GetButtonUp(int32_t A_1);
		bool Rewired_UI_IMouseInputSource_GetButton(int32_t A_1);
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPositionDelta();
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_wheelDelta();
		bool Rewired_UI_IMouseInputSource_get_locked();
		static bool dvRbBWrqSBXNKjlvOVBQDMRFuxI(Rewired_Core::Rewired::PlayerController_Axis* A_0);
		static bool CvtTaffhrKYYQrcHOBtgpyzdCNi(Rewired_Core::Rewired::PlayerController_Axis* A_0);
		static void _cctor();
	};
}

