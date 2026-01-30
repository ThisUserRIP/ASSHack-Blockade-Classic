#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct FlameCaster : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* myPS;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		float timer;
		UnityEngine_AudioModule::UnityEngine::AudioSource* myAS;
		void Start();
		void ShowFlame(bool _show);
		void Update();
		void _ctor();
	};
}

