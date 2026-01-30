#pragma once
namespace UnityEngine_UIModule::UnityEngine
{
	enum struct RenderMode : int32_t
	{
		ScreenSpaceOverlay = static_cast<int32_t>(0x0),
		ScreenSpaceCamera = static_cast<int32_t>(0x1),
		WorldSpace = static_cast<int32_t>(0x2),
	};
}

