#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct CarInfo; };
namespace Assembly_CSharp { struct VehicleInputController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CarSound : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::CarInfo* carInfo;
		Assembly_CSharp::VehicleInputController* controller;
		bool drift;
		UnityEngine_AudioModule::UnityEngine::AudioSource* driftSound;
		UnityEngine_AudioModule::UnityEngine::AudioSource* idleSound;
		UnityEngine_AudioModule::UnityEngine::AudioSource* drivingSound;
		float currentVolume;
		float currentGear;
		float gearSwitch;
		float rpm;
		void Initialize(Assembly_CSharp::CarInfo* aCarInfo, Assembly_CSharp::VehicleInputController* aController);
		void Update();
		void ShiftGear();
		void Destroy();
		void _ctor();
	};
}

