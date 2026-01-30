#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct DistanceMetric : int32_t
	{
		Perspective = static_cast<int32_t>(0x0),
		Orthographic = static_cast<int32_t>(0x1),
		CustomAxis = static_cast<int32_t>(0x2),
	};
}

