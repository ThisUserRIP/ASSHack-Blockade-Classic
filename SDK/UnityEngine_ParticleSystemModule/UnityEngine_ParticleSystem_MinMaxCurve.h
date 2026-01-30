#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "UnityEngine_ParticleSystemCurveMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_MinMaxCurve
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode m_Mode;
		float m_CurveMultiplier;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* m_CurveMin;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* m_CurveMax;
		float m_ConstantMin;
		float m_ConstantMax;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode get_mode();
		void set_mode(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode value);
		float get_curveMultiplier();
		void set_curveMultiplier(float value);
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* get_curveMax();
		void set_curveMax(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value);
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* get_curveMin();
		void set_curveMin(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value);
		float get_constantMax();
		void set_constantMax(float value);
		float get_constantMin();
		void set_constantMin(float value);
		float get_constant();
		void set_constant(float value);
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* get_curve();
		void set_curve(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value);
	};
}

