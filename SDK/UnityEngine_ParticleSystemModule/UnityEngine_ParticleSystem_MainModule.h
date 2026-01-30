#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_ParticleSystem_MinMaxCurve.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxCurve; };
#include "UnityEngine_ParticleSystem_MinMaxGradient.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxGradient; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_MainModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* m_ParticleSystem;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem);
		float get_duration();
		void set_duration(float value);
		bool get_loop();
		void set_loop(bool value);
		bool get_prewarm();
		void set_prewarm(bool value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startDelay();
		void set_startDelay(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startLifetime();
		void set_startLifetime(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startSpeed();
		void set_startSpeed(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		bool get_startSize3D();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startSize();
		void set_startSize(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		void set_startSizeMultiplier(float value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeX();
		void set_startSizeX(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeY();
		void set_startSizeY(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeZ();
		void set_startSizeZ(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient get_startColor();
		void set_startColor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient value);
		float get_simulationSpeed();
		void set_simulationSpeed(float value);
		static float get_duration_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self);
		static void set_duration_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, float value);
		static bool get_loop_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self);
		static void set_loop_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, bool value);
		static bool get_prewarm_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self);
		static void set_prewarm_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, bool value);
		static void get_startDelay_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startDelay_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_startLifetime_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startLifetime_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_startSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static bool get_startSize3D_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self);
		static void get_startSize_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startSize_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void set_startSizeMultiplier_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, float value);
		static void get_startSizeX_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startSizeX_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_startSizeY_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startSizeY_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_startSizeZ_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret);
		static void set_startSizeZ_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value);
		static void get_startColor_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient& ret);
		static void set_startColor_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient& value);
		static float get_simulationSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self);
		static void set_simulationSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, float value);
	};
}

