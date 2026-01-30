#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_DamageHandler.h"
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_PlayerDamageHandler : Assembly_CSharp::vp_DamageHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		float m_RespawnOffset;
		void Awake();
		void OnEnable();
		void OnDisable();
		void Damage(float damage);
		void Die();
		void Respawn();
		void Reset();
		void Reactivate();
		float get_OnValue_Health();
		void set_OnValue_Health(float value);
		void Update();
		void _ctor();
	};
}

