#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableColor; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableAlphaKeys; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableColorKeys; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializablePSGradientMode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleSystem_MinMaxGradient.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MinMaxGradient; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableMinMaxGradient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColor* color;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColor* colorMax;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColor* colorMin;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys* gradientAlphaKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColorKeys* gradientColorKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys* gradientMaxAlphaKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColorKeys* gradientMaxColorKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys* gradientMinAlphaKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColorKeys* gradientMinColorKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializablePSGradientMode* gradientMode;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient minMaxGradient);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient GetMinMaxGradient();
	};
}

