#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct vp_Shooter; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_SimpleAITurret : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float ViewRange;
		float AimSpeed;
		float WakeInterval;
		Assembly_CSharp::vp_Shooter* m_Shooter;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Target;
		Assembly_CSharp::vp_Timer_Handle* m_Timer;
		void Start();
		void Update();
		UnityEngine_CoreModule::UnityEngine::Transform* ScanForLocalPlayer();
		void AttackTarget();
		void _ctor();
		void _Update_b__8_0();
	};
}

