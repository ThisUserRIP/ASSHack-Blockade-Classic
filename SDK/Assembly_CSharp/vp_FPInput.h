#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace Assembly_CSharp { struct vp_FPCamera; };
namespace Assembly_CSharp { struct WeaponSystem; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "ITEM.h"

namespace Assembly_CSharp
{
	struct vp_FPInput : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_FPPlayerEventHandler* Player;
		Assembly_CSharp::vp_FPCamera* m_FPCamera;
		Assembly_CSharp::WeaponSystem* m_WeaponSystem;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* MouseCursorZones;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_MousePos;
		float MouseBlockZoom;
		IL2CPP::Array<int32_t>* awid;
		int32_t cwid;
		int32_t swid;
		bool zombie;
		int32_t lastcwid;
		float stopmove;
		bool isZooming;
		bool m_AllowGameplayInput;
		bool HideWeapons;
		int32_t lastweapon2;
		int32_t last_swid;
		bool get_AllowGameplayInput();
		void set_AllowGameplayInput(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_MousePos();
		int32_t get_MouseSmoothSteps();
		void set_MouseSmoothSteps(int32_t value);
		float get_MouseSmoothWeight();
		void set_MouseSmoothWeight(float value);
		bool get_MouseAcceleration();
		void set_MouseAcceleration(bool value);
		float get_MouseAccelerationThreshold();
		void set_MouseAccelerationThreshold(float value);
		void Awake();
		void Update();
		void InputMove();
		void InputWalk();
		void InputJump();
		void InputJetpack();
		void InputCrouch();
		void InputAnimal();
		void InputZoom();
		void InputAttack();
		mscorlib::System::Collections::IEnumerator* AutoReload();
		void InputReload();
		void InputSetWeapon();
		void RestoreSetWeapon();
		void SetPrimaryWeapon(bool build_mode_and_block);
		void SetZombieWeapon();
		mscorlib::System::Collections::IEnumerator* cr_SetZombieWeapon();
		void SetAnimalWeapon(Assembly_CSharp::ITEM _wID);
		mscorlib::System::Collections::IEnumerator* cr_SetAnimalWeapon(Assembly_CSharp::ITEM _wID);
		void UpdatePause();
		void UpdateCursorLock();
		void OnEnable();
		void OnDisable();
		bool get_OnValue_AllowGameplayInput();
		void set_OnValue_AllowGameplayInput(bool value);
		bool get_OnValue_Pause();
		void set_OnValue_Pause(bool value);
		void SetHideWeapons(bool val);
		void SetActiveWeapons(int32_t mwid, int32_t pwid, int32_t swid);
		void _ctor();
	};
}

