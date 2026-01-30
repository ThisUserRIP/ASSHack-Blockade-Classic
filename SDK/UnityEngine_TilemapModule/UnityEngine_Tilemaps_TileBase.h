#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3Int; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct ITilemap; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct TileData; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct TileData; };
#include "UnityEngine_Tilemaps_TileData.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct TileAnimationData; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct TileAnimationData; };
#include "UnityEngine_Tilemaps_TileAnimationData.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct TileBase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void RefreshTile(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap);
		void GetTileData(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData& tileData);
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData GetTileDataNoRef(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap);
		bool GetTileAnimationData(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData& tileAnimationData);
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap);
		bool StartUp(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_CoreModule::UnityEngine::GameObject* go);
		void _ctor();
	};
}

