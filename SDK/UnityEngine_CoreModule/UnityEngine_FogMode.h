#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct FogMode : int32_t
	{
		Linear = static_cast<int32_t>(0x1),
		Exponential = static_cast<int32_t>(0x2),
		ExponentialSquared = static_cast<int32_t>(0x3),
	};
}

