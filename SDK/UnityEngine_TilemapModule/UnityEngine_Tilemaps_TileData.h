#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
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

namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	struct TileData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* m_Sprite;
		UnityEngine_CoreModule::UnityEngine::Color m_Color;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_Transform;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_GameObject;
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileFlags m_Flags;
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tile_ColliderType m_ColliderType;
		void set_sprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		void set_transform(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void set_gameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		void set_flags(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileFlags value);
		void set_colliderType(UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tile_ColliderType value);
	};
}

