#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_TrailModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* m_ParticleSystem;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem);
		bool get_enabled();
		void set_enabled(bool value);
		static bool get_enabled_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_TrailModule& _unity_self);
		static void set_enabled_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_TrailModule& _unity_self, bool value);
	};
}

