#pragma once
namespace UnityEngine_TilemapModule::UnityEngine::Tilemaps
{
	enum struct TileFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		LockColor = static_cast<int32_t>(0x1),
		LockTransform = static_cast<int32_t>(0x2),
		InstantiateGameObjectRuntimeOnly = static_cast<int32_t>(0x4),
		LockAll = static_cast<int32_t>(0x3),
	};
}

