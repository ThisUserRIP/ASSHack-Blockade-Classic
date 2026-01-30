#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "UnityEngine_ParticleCollisionEvent.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleCollisionEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystemExtensionsImpl : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t GetCollisionEvents(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* ps, UnityEngine_CoreModule::UnityEngine::GameObject* go, mscorlib::System::Collections::Generic::List_1<UnityEngine_ParticleSystemModule::UnityEngine::ParticleCollisionEvent>* collisionEvents);
	};
}

