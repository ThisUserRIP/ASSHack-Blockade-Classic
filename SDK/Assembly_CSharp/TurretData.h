#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct MeshCollider; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct TurretData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* turret;
		UnityEngine_CoreModule::UnityEngine::GameObject* barrel;
		UnityEngine_CoreModule::UnityEngine::GameObject* muzzleFlash1;
		UnityEngine_CoreModule::UnityEngine::GameObject* muzzleFlash2;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* rigidBody;
		UnityEngine_PhysicsModule::UnityEngine::MeshCollider* collider;
		UnityEngine_AudioModule::UnityEngine::AudioSource* aimingSound;
		float idleToAimRange;
		float aimSpeed;
		float aimToFireAngle;
		float rof;
		float currentRof;
		mscorlib::System::String* projectile;
		mscorlib::System::String* muzzleFlash;
		mscorlib::System::String* sound;
		void _ctor();
	};
}

