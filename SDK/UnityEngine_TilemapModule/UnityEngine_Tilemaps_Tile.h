#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Tilemaps_TileBase.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "UnityEngine_Tilemaps_TileFlags.h"
#include "UnityEngine_Tilemaps_Tile_ColliderType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3Int; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct ITilemap; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct TileData; };
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps { struct TileData; };

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct Tile : UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* m_Sprite;
		UnityEngine_CoreModule::UnityEngine::Color m_Color;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_Transform;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_InstancedGameObject;
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileFlags m_Flags;
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType;
		UnityEngine_CoreModule::UnityEngine::Sprite* get_sprite();
		void set_sprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_transform();
		void set_transform(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_gameObject();
		void set_gameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileFlags get_flags();
		void set_flags(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileFlags value);
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tile_ColliderType get_colliderType();
		void set_colliderType(UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tile_ColliderType value);
		void GetTileData(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData& tileData);
		void _ctor();
	};
}

