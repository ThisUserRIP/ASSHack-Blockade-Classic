#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ShadowCascadesOption : int32_t
	{
		NoCascades = static_cast<int32_t>(0x0),
		TwoCascades = static_cast<int32_t>(0x1),
		FourCascades = static_cast<int32_t>(0x2),
	};
}

