#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_MeshSubsetCombineUtility.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshSubsetCombineUtility; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct MeshSubsetCombineUtility_SubMeshInstance
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t meshInstanceID;
		int32_t vertexOffset;
		int32_t gameObjectInstanceID;
		int32_t subMeshIndex;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 transform;
	};
}

