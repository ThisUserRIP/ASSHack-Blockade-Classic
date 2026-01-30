#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_TerrainData_BoundaryValueType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_TerrainModule::UnityEngine { struct Terrain; };

namespace UnityEngine_TerrainModule::UnityEngine
{
	struct TerrainData : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t k_MaximumResolution;
			int32_t k_MinimumDetailResolutionPerPatch;
			int32_t k_MaximumDetailResolutionPerPatch;
			int32_t k_MaximumDetailPatchCount;
			int32_t k_MaximumDetailsPerRes;
			int32_t k_MinimumAlphamapResolution;
			int32_t k_MaximumAlphamapResolution;
			int32_t k_MinimumBaseMapResolution;
			int32_t k_MaximumBaseMapResolution;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t GetBoundaryValue(UnityEngine_TerrainModule::UnityEngine::TerrainData_BoundaryValueType type);
		void _ctor();
		static void Internal_Create(UnityEngine_TerrainModule::UnityEngine::TerrainData* terrainData);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_size();
		float GetAlphamapResolutionInternal();
		IL2CPP::Array<UnityEngine_TerrainModule::UnityEngine::Terrain*>* get_users();
		static void _cctor();
		void get_size_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
	};
}

