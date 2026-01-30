#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "UnityEngine_MeshTopology.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct SubMeshDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Bounds _bounds_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::MeshTopology _topology_k__BackingField;
		int32_t _indexStart_k__BackingField;
		int32_t _indexCount_k__BackingField;
		int32_t _baseVertex_k__BackingField;
		int32_t _firstVertex_k__BackingField;
		int32_t _vertexCount_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Bounds get_bounds();
		UnityEngine_CoreModule::UnityEngine::MeshTopology get_topology();
		int32_t get_indexStart();
		int32_t get_indexCount();
		int32_t get_baseVertex();
		int32_t get_firstVertex();
		int32_t get_vertexCount();
		mscorlib::System::String* ToString();
	};
}

