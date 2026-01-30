#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct DynamicResScalePolicyType : int32_t
	{
		ReturnsPercentage = static_cast<int32_t>(0x0),
		ReturnsMinMaxLerpFactor = static_cast<int32_t>(0x1),
	};
}

