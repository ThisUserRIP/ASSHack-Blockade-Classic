#pragma once
namespace UnityEngine_TerrainModule::UnityEngine
{
	enum struct TerrainData_BoundaryValueType : int32_t
	{
		MaxHeightmapRes = static_cast<int32_t>(0x0),
		MinDetailResPerPatch = static_cast<int32_t>(0x1),
		MaxDetailResPerPatch = static_cast<int32_t>(0x2),
		MaxDetailPatchCount = static_cast<int32_t>(0x3),
		MaxDetailsPerRes = static_cast<int32_t>(0x4),
		MinAlphamapRes = static_cast<int32_t>(0x5),
		MaxAlphamapRes = static_cast<int32_t>(0x6),
		MinBaseMapRes = static_cast<int32_t>(0x7),
		MaxBaseMapRes = static_cast<int32_t>(0x8),
	};
}

