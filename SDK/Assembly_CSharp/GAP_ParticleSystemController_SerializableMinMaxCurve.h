#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableAnimationCurve; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializablePSCurveMode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleSystem_MinMaxCurve.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxCurve; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableMinMaxCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float constant;
		float constantMax;
		float constantMin;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAnimationCurve* curve;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAnimationCurve* curveMax;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAnimationCurve* curveMin;
		float curveMultiplier;
		Assembly_CSharp::GAP_ParticleSystemController::SerializablePSCurveMode* curveMode;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve minMaxCurve);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve GetMinMaxCurve();
	};
}

