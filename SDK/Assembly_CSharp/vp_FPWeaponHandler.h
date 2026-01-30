#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace Assembly_CSharp { struct vp_FPWeapon; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct vp_FPWeaponHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t StartWeapon;
		float AttackStateDisableDelay;
		float SetWeaponRefreshStatesDelay;
		float SetWeaponDuration;
		float SetWeaponReloadSleepDuration;
		float SetWeaponZoomSleepDuration;
		float SetWeaponAttackSleepDuration;
		float ReloadAttackSleepDuration;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_FPWeapon>* m_Weapons;
		int32_t m_CurrentWeaponID;
		Assembly_CSharp::vp_FPWeapon* m_CurrentWeapon;
		Assembly_CSharp::vp_Timer_Handle* m_SetWeaponTimer;
		Assembly_CSharp::vp_Timer_Handle* m_SetWeaponRefreshTimer;
		Assembly_CSharp::vp_Timer_Handle* m_DisableAttackStateTimer;
		Assembly_CSharp::vp_Timer_Handle* m_DisableReloadStateTimer;
		Assembly_CSharp::vp_FPWeapon* get_CurrentWeapon();
		int32_t get_CurrentWeaponID();
		void Awake();
		void OnEnable();
		void OnDisable();
		void Update();
		void SetWeapon(int32_t i);
		void CancelTimers();
		void SetWeaponLayer(int32_t layer);
		void OnStart_Reload();
		void OnStart_SetWeapon();
		void OnStop_SetWeapon();
		bool CanStart_SetWeapon();
		bool CanStart_Attack();
		void OnStop_Attack();
		bool OnAttempt_SetPrevWeapon();
		bool OnAttempt_SetNextWeapon();
		bool OnAttempt_SetWeaponByName(mscorlib::System::String* name);
		bool get_OnValue_CurrentWeaponWielded();
		mscorlib::System::String* get_OnValue_CurrentWeaponName();
		int32_t get_OnValue_CurrentWeaponID();
		void _ctor();
		void _OnEnable_b__22_0();
		void _OnStop_SetWeapon_b__30_0();
		void _OnStop_Attack_b__33_0();
	};
}

