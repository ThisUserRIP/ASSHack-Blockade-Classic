#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_ParticleSystem_MinMaxCurve.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxCurve; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_Burst
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Time;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve m_Count;
		int32_t m_RepeatCount;
		float m_RepeatInterval;
		float m_InvProbability;
		int16_t get_minCount();
		int16_t get_maxCount();
	};
}

