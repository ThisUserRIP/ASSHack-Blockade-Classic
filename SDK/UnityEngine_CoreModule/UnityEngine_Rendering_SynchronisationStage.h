#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct SynchronisationStage : int32_t
	{
		VertexProcessing = static_cast<int32_t>(0x0),
		PixelProcessing = static_cast<int32_t>(0x1),
	};
}

