#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Vehicle; };
namespace Assembly_CSharp { struct VehicleInfo; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct VehicleDamageEffect : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Vehicle* vehicle;
		Assembly_CSharp::VehicleInfo* vehicleInfo;
		UnityEngine_CoreModule::UnityEngine::GameObject* referenceObject;
		UnityEngine_CoreModule::UnityEngine::GameObject* smoke;
		UnityEngine_CoreModule::UnityEngine::GameObject* fire;
		bool onFire;
		float damagePerSecondWhenOnFire;
		float damageTimer;
		UnityEngine_AudioModule::UnityEngine::AudioSource* fireAudio;
		void Initialize(Assembly_CSharp::Vehicle* aVehicle);
		void Update();
		void AddSmokeOrFire(mscorlib::System::String* aType);
		void Destroy();
		void _ctor();
	};
}

