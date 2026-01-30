#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct FullScreenMode : int32_t
	{
		ExclusiveFullScreen = static_cast<int32_t>(0x0),
		FullScreenWindow = static_cast<int32_t>(0x1),
		MaximizedWindow = static_cast<int32_t>(0x2),
		Windowed = static_cast<int32_t>(0x3),
	};
}

