#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct LightType : int32_t
	{
		Spot = static_cast<int32_t>(0x0),
		Directional = static_cast<int32_t>(0x1),
		Point = static_cast<int32_t>(0x2),
		Area = static_cast<int32_t>(0x3),
		Rectangle = static_cast<int32_t>(0x3),
		Disc = static_cast<int32_t>(0x4),
	};
}

