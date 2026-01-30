#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleSystemGradientMode.h"

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializablePSGradientMode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* mode;
		void _ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemGradientMode psGradientMode);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemGradientMode GetGradientMode();
	};
}

