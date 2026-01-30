#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct MixedLightingMode : int32_t
	{
		IndirectOnly = static_cast<int32_t>(0x0),
		Shadowmask = static_cast<int32_t>(0x2),
		Subtractive = static_cast<int32_t>(0x1),
	};
}

