#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableColor; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_GradientColorKey.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GradientColorKey; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableColorKeys : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::GAP_ParticleSystemController::SerializableColor*>* color;
		IL2CPP::Array<float>* time;
		void _ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientColorKey>* gradColorKeys);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientColorKey>* GetColorKeys();
	};
}

