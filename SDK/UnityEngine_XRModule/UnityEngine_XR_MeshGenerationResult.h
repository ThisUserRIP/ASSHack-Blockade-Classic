#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_XR_MeshId.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct MeshId; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct MeshCollider; };
#include "UnityEngine_XR_MeshGenerationStatus.h"
#include "UnityEngine_XR_MeshVertexAttributes.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct MeshGenerationResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_XRModule::UnityEngine::XR::MeshId _MeshId_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Mesh* _Mesh_k__BackingField;
		UnityEngine_PhysicsModule::UnityEngine::MeshCollider* _MeshCollider_k__BackingField;
		UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField;
		UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField;
		UnityEngine_XRModule::UnityEngine::XR::MeshId get_MeshId();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_Mesh();
		UnityEngine_PhysicsModule::UnityEngine::MeshCollider* get_MeshCollider();
		UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus get_Status();
		UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes get_Attributes();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult other);
		int32_t GetHashCode();
	};
}

