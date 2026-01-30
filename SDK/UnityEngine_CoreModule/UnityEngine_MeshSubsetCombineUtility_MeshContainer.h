#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_MeshSubsetCombineUtility.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "UnityEngine_MeshSubsetCombineUtility_MeshInstance.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility_MeshInstance; };
#include "UnityEngine_MeshSubsetCombineUtility_SubMeshInstance.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility_SubMeshInstance; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct MeshSubsetCombineUtility_MeshContainer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* gameObject;
		UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_MeshInstance instance;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_SubMeshInstance>* subMeshInstances;
	};
}

