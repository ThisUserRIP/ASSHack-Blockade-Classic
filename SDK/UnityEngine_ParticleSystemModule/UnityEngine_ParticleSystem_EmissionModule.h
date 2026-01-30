#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_ParticleSystem_MinMaxCurve.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxCurve; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ParticleSystem_Burst.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_Burst; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_EmissionModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* m_ParticleSystem;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverTime();
		int32_t GetBursts(IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst>* bursts);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst GetBurst(int32_t index);
		int32_t get_burstCount();
		static void get_rateOverTime_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_EmissionModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void GetBurst_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_EmissionModule& _unity_self, int32_t index, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Burst& ret);
		static int32_t get_burstCount_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_EmissionModule& _unity_self);
	};
}

