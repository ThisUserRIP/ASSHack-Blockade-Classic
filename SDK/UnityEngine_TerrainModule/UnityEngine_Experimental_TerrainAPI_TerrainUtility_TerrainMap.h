#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility.h"
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ErrorCode.h"
#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord.h"
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility_TerrainMap_TileCoord; };
namespace UnityEngine_TerrainModule::UnityEngine { struct Terrain; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility_TerrainMap_TerrainFilter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	struct TerrainUtility_TerrainMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_patchSize;
		UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode m_errorCode;
		mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TileCoord, UnityEngine_TerrainModule::UnityEngine::Terrain>* m_terrainTiles;
		UnityEngine_TerrainModule::UnityEngine::Terrain* GetTerrain(int32_t tileX, int32_t tileZ);
		static UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* CreateFromPlacement(UnityEngine_TerrainModule::UnityEngine::Terrain* originTerrain, UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* filter, bool fullValidation);
		static UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* CreateFromPlacement(UnityEngine_CoreModule::UnityEngine::Vector2 gridOrigin, UnityEngine_CoreModule::UnityEngine::Vector2 gridSize, UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* filter, bool fullValidation);
		void _ctor();
		void AddTerrainInternal(int32_t x, int32_t z, UnityEngine_TerrainModule::UnityEngine::Terrain* terrain);
		bool TryToAddTerrain(int32_t tileX, int32_t tileZ, UnityEngine_TerrainModule::UnityEngine::Terrain* terrain);
		void ValidateTerrain(int32_t tileX, int32_t tileZ);
		UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode Validate();
	};
}

