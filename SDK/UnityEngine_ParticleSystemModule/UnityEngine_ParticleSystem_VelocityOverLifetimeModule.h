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
#include "UnityEngine_ParticleSystem_MinMaxCurve.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxCurve; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_VelocityOverLifetimeModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* m_ParticleSystem;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem);
		bool get_enabled();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_x();
		void set_x(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_y();
		void set_y(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_z();
		void set_z(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		static bool get_enabled_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self);
		static void get_x_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_x_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_y_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_y_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_z_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_z_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
	};
}

