#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct EntManager; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace Assembly_CSharp { struct Sound; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct VehicleSmoke : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::EntManager* entmanager;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* Smoke1;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* Smoke2;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* Smoke3;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* Smoke4;
		Assembly_CSharp::Sound* s;
		UnityEngine_AudioModule::UnityEngine::AudioSource* AS;
		void Awake();
		mscorlib::System::Collections::IEnumerator* Start();
		void KillSelf();
		void Smoke();
		void _ctor();
	};
}

