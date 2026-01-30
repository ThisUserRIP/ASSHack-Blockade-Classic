#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct TransparencySortMode : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Perspective = static_cast<int32_t>(0x1),
		Orthographic = static_cast<int32_t>(0x2),
		CustomAxis = static_cast<int32_t>(0x3),
	};
}

