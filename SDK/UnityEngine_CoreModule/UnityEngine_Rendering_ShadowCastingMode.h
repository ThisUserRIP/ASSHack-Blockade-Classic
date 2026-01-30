#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ShadowCastingMode : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		On = static_cast<int32_t>(0x1),
		TwoSided = static_cast<int32_t>(0x2),
		ShadowsOnly = static_cast<int32_t>(0x3),
	};
}

