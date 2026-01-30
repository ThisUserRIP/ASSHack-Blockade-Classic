#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct InternalStaticBatchingUtility_StaticBatcherGOSorter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_MeshSubsetCombineUtility_MeshContainer.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility_MeshContainer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct InternalStaticBatchingUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static uint32_t GetMeshFormatHash(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* SortGameObjectsForStaticBatching(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* gos, UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter* sorter);
		static void CombineGameObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* gos, UnityEngine_CoreModule::UnityEngine::GameObject* staticBatchRoot, bool isEditorPostprocessScene, UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter* sorter);
		static void MakeBatch(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::MeshSubsetCombineUtility_MeshContainer>* meshes, UnityEngine_CoreModule::UnityEngine::Transform* staticBatchRootTransform, int32_t batchIndex);
	};
}

