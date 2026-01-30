#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct ThreadPriority : int32_t
	{
		Low = static_cast<int32_t>(0x0),
		BelowNormal = static_cast<int32_t>(0x1),
		Normal = static_cast<int32_t>(0x2),
		High = static_cast<int32_t>(0x4),
	};
}

