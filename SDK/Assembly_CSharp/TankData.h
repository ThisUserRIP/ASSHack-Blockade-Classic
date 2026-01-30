#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleData.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct vp_MuzzleFlash; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct TankData : Assembly_CSharp::VehicleData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* body;
		UnityEngine_CoreModule::UnityEngine::Transform* tower;
		UnityEngine_CoreModule::UnityEngine::Transform* barrel;
		UnityEngine_CoreModule::UnityEngine::Transform* kpvt;
		UnityEngine_CoreModule::UnityEngine::GameObject* tankTrackLeft;
		UnityEngine_CoreModule::UnityEngine::GameObject* tankTrackRight;
		Assembly_CSharp::vp_MuzzleFlash* barrelMuzzleFlash;
		Assembly_CSharp::vp_MuzzleFlash* kpvtMuzzleFlash;
		UnityEngine_CoreModule::UnityEngine::GameObject* projectile;
		UnityEngine_AudioModule::UnityEngine::AudioSource* drivingSound;
		UnityEngine_AudioModule::UnityEngine::AudioSource* aimingSound;
		void _ctor();
	};
}

