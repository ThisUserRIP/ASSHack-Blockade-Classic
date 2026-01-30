#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct ParticleSystemOriginalSettings; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SaveParticleSystemScript : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void SaveVFX(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::GAP_ParticleSystemController::ParticleSystemOriginalSettings>* psOriginalSettingsList);
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::GAP_ParticleSystemController::ParticleSystemOriginalSettings>* LoadVFX(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX);
		static bool CheckExistingFile(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX);
		static mscorlib::System::String* GetPrefabFolder(UnityEngine_CoreModule::UnityEngine::GameObject* prefabVFX);
	};
}

