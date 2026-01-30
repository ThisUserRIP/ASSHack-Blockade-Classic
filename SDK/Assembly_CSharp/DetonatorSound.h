#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorSound : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* nearSounds;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* farSounds;
		float distanceThreshold;
		float minVolume;
		float maxVolume;
		float rolloffFactor;
		UnityEngine_AudioModule::UnityEngine::AudioSource* _soundComponent;
		bool _delayedExplosionStarted;
		float _explodeDelay;
		int32_t _idx;
		void Init();
		void Update();
		void Explode();
		void Reset();
		void _ctor();
	};
}

