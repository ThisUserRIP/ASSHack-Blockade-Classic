#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableAlphaKeys; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableColorKeys; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableGradientMode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableGradient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::GAP_ParticleSystemController::SerializableAlphaKeys* gradientAlphaKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableColorKeys* gradientColorKeys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableGradientMode* gradientMode;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Gradient* gradient);
		UnityEngine_CoreModule::UnityEngine::Gradient* GetGradient();
	};
}

