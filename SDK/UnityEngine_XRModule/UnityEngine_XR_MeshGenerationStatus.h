#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct MeshGenerationStatus : int32_t
	{
		Success = static_cast<int32_t>(0x0),
		InvalidMeshId = static_cast<int32_t>(0x1),
		GenerationAlreadyInProgress = static_cast<int32_t>(0x2),
		Canceled = static_cast<int32_t>(0x3),
		UnknownError = static_cast<int32_t>(0x4),
	};
}

