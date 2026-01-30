#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Component.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "UnityEngine_ParticleSystem_Particle.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_Particle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ParticleSystemStopBehavior.h"
#include "UnityEngine_ParticleSystem_EmitParams.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_EmitParams; };
#include "UnityEngine_ParticleSystem_MainModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MainModule; };
#include "UnityEngine_ParticleSystem_EmissionModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_EmissionModule; };
#include "UnityEngine_ParticleSystem_ShapeModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_ShapeModule; };
#include "UnityEngine_ParticleSystem_VelocityOverLifetimeModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_VelocityOverLifetimeModule; };
#include "UnityEngine_ParticleSystem_ColorOverLifetimeModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_ColorOverLifetimeModule; };
#include "UnityEngine_ParticleSystem_LightsModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_LightsModule; };
#include "UnityEngine_ParticleSystem_TrailModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_TrailModule; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Emit(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Vector3 velocity, float size, float lifetime, UnityEngine_CoreModule::UnityEngine::Color32 color);
		void Emit(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle particle);
		void set_loop(bool value);
		void set_startSize(float value);
		UnityEngine_CoreModule::UnityEngine::Color get_startColor();
		void set_startColor(UnityEngine_CoreModule::UnityEngine::Color value);
		bool get_isPlaying();
		int32_t get_particleCount();
		int32_t GetParticles(IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle>* particles, int32_t size, int32_t offset);
		int32_t GetParticles(IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle>* particles, int32_t size);
		int32_t GetParticles(IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle>* particles);
		void Play(bool withChildren);
		void Play();
		void Stop(bool withChildren, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemStopBehavior stopBehavior);
		void Stop(bool withChildren);
		void Stop();
		void Clear(bool withChildren);
		void Clear();
		bool IsAlive(bool withChildren);
		void Emit(int32_t count);
		void Emit_Internal(int32_t count);
		void Emit(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_EmitParams emitParams, int32_t count);
		void EmitOld_Internal(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle& particle);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule get_main();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_EmissionModule get_emission();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_ShapeModule get_shape();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule get_velocityOverLifetime();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_ColorOverLifetimeModule get_colorOverLifetime();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_LightsModule get_lights();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_TrailModule get_trails();
		void Emit_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_EmitParams& emitParams, int32_t count);
	};
}

