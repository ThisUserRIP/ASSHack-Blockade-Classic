#pragma once
namespace UnityEngine_InputLegacyModule::UnityEngine
{
	enum struct TouchPhase : int32_t
	{
		Began = static_cast<int32_t>(0x0),
		Moved = static_cast<int32_t>(0x1),
		Stationary = static_cast<int32_t>(0x2),
		Ended = static_cast<int32_t>(0x3),
		Canceled = static_cast<int32_t>(0x4),
	};
}

