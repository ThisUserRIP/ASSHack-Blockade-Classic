#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct ScytheSoulsEffectController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isFirsPerson;
		UnityEngine_CoreModule::UnityEngine::Renderer* MyRenderer;
		IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem*>* myEffectsWave;
		IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem*>* myEffectsSparks;
		IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem*>* myEffectsRays;
		UnityEngine_AudioModule::UnityEngine::AudioSource* myEffectAudio;
		UnityEngine_CoreModule::UnityEngine::Light* myLight;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* palette;
		float effectTimer;
		UnityEngine_CoreModule::UnityEngine::Color myColor;
		UnityEngine_AudioModule::UnityEngine::AudioClip* scythe_blink;
		UnityEngine_AudioModule::UnityEngine::AudioClip* scythe_your_soul_is_mine;
		void OnEnable();
		void SetMyColor(int32_t _team);
		void Update();
		void PlayEffects();
		void UpdateEffects(IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem*>* myEffects, UnityEngine_CoreModule::UnityEngine::Color _color, bool _play);
		void _ctor();
	};
}

