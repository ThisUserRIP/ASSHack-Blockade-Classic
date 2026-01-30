#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "UnityEngine_MeshSubsetCombineUtility_MeshInstance.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility_MeshInstance; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_MeshSubsetCombineUtility_SubMeshInstance.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility_SubMeshInstance; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct StaticBatchingHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Mesh* InternalCombineVertices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_MeshInstance>* meshes, mscorlib::System::String* meshName);
		static void InternalCombineIndices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_SubMeshInstance>* submeshes, UnityEngine_CoreModule::UnityEngine::Mesh* combinedMesh);
		static bool IsMeshBatchable(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
	};
}

