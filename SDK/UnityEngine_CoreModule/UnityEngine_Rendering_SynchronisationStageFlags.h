#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct SynchronisationStageFlags : int32_t
	{
		VertexProcessing = static_cast<int32_t>(0x1),
		PixelProcessing = static_cast<int32_t>(0x2),
		ComputeProcessing = static_cast<int32_t>(0x4),
		AllGPUOperations = static_cast<int32_t>(0x7),
	};
}

