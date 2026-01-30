#pragma once
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	enum struct Tile_ColliderType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Sprite = static_cast<int32_t>(0x1),
		Grid = static_cast<int32_t>(0x2),
	};
}

