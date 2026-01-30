#pragma once
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	enum struct TerrainUtility_TerrainMap_ErrorCode : int32_t
	{
		OK = static_cast<int32_t>(0x0),
		Overlapping = static_cast<int32_t>(0x1),
		SizeMismatch = static_cast<int32_t>(0x4),
		EdgeAlignmentMismatch = static_cast<int32_t>(0x8),
	};
}

