#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "UnityEngine_ParticleSystem_Particle.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_Particle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_EmitParams
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		//UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle m_Particle;
		bool m_PositionSet;
		bool m_VelocitySet;
		bool m_AxisOfRotationSet;
		bool m_RotationSet;
		bool m_AngularVelocitySet;
		bool m_StartSizeSet;
		bool m_StartColorSet;
		bool m_RandomSeedSet;
		bool m_StartLifetimeSet;
		bool m_MeshIndexSet;
		bool m_ApplyShapeToPosition;
	};
}

