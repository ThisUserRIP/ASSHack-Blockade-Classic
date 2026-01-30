#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct ParticleSystemSound : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* _shootSound;
		float _shootPitchMax;
		float _shootPitchMin;
		float _shootVolumeMax;
		float _shootVolumeMin;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* _explosionSound;
		float _explosionPitchMax;
		float _explosionPitchMin;
		float _explosionVolumeMax;
		float _explosionVolumeMin;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* _crackleSound;
		float _crackleDelay;
		int32_t _crackleMultiplier;
		float _cracklePitchMax;
		float _cracklePitchMin;
		float _crackleVolumeMax;
		float _crackleVolumeMin;
		void LateUpdate();
		mscorlib::System::Collections::IEnumerator* Crackle(UnityEngine_CoreModule::UnityEngine::Vector3 pos, float delay);
		void _ctor();
	};
}

