#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleData.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct vp_MuzzleFlash; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct HelicopterData : Assembly_CSharp::VehicleData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* body;
		UnityEngine_CoreModule::UnityEngine::Transform* gunBracket;
		UnityEngine_CoreModule::UnityEngine::Transform* mainGun;
		UnityEngine_CoreModule::UnityEngine::Transform* mainRotor;
		UnityEngine_CoreModule::UnityEngine::Transform* tailRotor;
		UnityEngine_CoreModule::UnityEngine::Transform* steeringWheel;
		Assembly_CSharp::vp_MuzzleFlash* muzzleFlash;
		UnityEngine_AudioModule::UnityEngine::AudioSource* rotorSound;
		void _ctor();
	};
}

