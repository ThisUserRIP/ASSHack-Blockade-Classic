#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct MeshUpdateFlags : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		DontValidateIndices = static_cast<int32_t>(0x1),
		DontResetBoneBounds = static_cast<int32_t>(0x2),
		DontNotifyMeshUsers = static_cast<int32_t>(0x4),
		DontRecalculateBounds = static_cast<int32_t>(0x8),
	};
}

