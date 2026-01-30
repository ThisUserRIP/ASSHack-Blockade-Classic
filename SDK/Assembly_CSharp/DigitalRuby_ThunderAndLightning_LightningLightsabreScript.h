#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltPrefabScript.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningLightsabreScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float BladeHeight;
		float ActivationTime;
		UnityEngine_AudioModule::UnityEngine::AudioSource* StartSound;
		UnityEngine_AudioModule::UnityEngine::AudioSource* StopSound;
		UnityEngine_AudioModule::UnityEngine::AudioSource* ConstantSound;
		int32_t state;
		UnityEngine_CoreModule::UnityEngine::Vector3 bladeStart;
		UnityEngine_CoreModule::UnityEngine::Vector3 bladeDir;
		float bladeTime;
		float bladeIntensity;
		void Start();
		void Update();
		bool TurnOn(bool value);
		void TurnOnGUI(bool value);
		void _ctor();
	};
}

