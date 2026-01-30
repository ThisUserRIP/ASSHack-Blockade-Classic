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
#include "UnityEngine_ParticleSystem_MinMaxGradient.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxGradient; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_ColorOverLifetimeModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* m_ParticleSystem;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem);
		bool get_enabled();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient get_color();
		void set_color(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient value);
		static bool get_enabled_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self);
		static void get_color_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient& ret);
		static void set_color_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient& value);
	};
}

