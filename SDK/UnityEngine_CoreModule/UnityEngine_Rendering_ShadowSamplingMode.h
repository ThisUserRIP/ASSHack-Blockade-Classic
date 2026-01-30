#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ShadowSamplingMode : int32_t
	{
		CompareDepths = static_cast<int32_t>(0x0),
		RawDepth = static_cast<int32_t>(0x1),
		None = static_cast<int32_t>(0x2),
	};
}

