#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_HitscanBullet : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IgnoreLocalPlayer;
		float Range;
		float Force;
		float Damage;
		mscorlib::System::String* DamageMethodName;
		float m_SparkFactor;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_ImpactPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_DustPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_SparkPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_DebrisPrefab;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_AudioModule::UnityEngine::AudioClip>* m_ImpactSounds;
		UnityEngine_CoreModule::UnityEngine::Vector2 SoundImpactPitch;
		IL2CPP::Array<int32_t>* NoDecalOnTheseLayers;
		void Start();
		void TryDestroy();
		void _ctor();
	};
}

