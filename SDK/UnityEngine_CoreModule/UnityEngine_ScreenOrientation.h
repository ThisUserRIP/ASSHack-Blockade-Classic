#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct ScreenOrientation : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Portrait = static_cast<int32_t>(0x1),
		PortraitUpsideDown = static_cast<int32_t>(0x2),
		LandscapeLeft = static_cast<int32_t>(0x3),
		LandscapeRight = static_cast<int32_t>(0x4),
		AutoRotation = static_cast<int32_t>(0x5),
		Landscape = static_cast<int32_t>(0x3),
	};
}

