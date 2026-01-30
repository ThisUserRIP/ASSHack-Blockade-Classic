#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_Particle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Position;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Velocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_AnimatedVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_InitialVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_AxisOfRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Rotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_AngularVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_StartSize;
		UnityEngine_CoreModule::UnityEngine::Color32 m_StartColor;
		uint32_t m_RandomSeed;
		uint32_t m_ParentRandomSeed;
		float m_Lifetime;
		float m_StartLifetime;
		int32_t m_MeshIndex;
		float m_EmitAccumulator0;
		float m_EmitAccumulator1;
		uint32_t m_Flags;
		void set_lifetime(float value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void set_velocity(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		float get_remainingLifetime();
		void set_remainingLifetime(float value);
		float get_startLifetime();
		void set_startLifetime(float value);
		void set_startColor(UnityEngine_CoreModule::UnityEngine::Color32 value);
		void set_randomSeed(uint32_t value);
		void set_startSize(float value);
		void set_rotation3D(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void set_angularVelocity3D(UnityEngine_CoreModule::UnityEngine::Vector3 value);
	};
}

