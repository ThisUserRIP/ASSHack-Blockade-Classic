#pragma once
namespace UnityEngine_VideoModule::UnityEngine::Video
{
	enum struct VideoAspectRatio : int32_t
	{
		NoScaling = static_cast<int32_t>(0x0),
		FitVertically = static_cast<int32_t>(0x1),
		FitHorizontally = static_cast<int32_t>(0x2),
		FitInside = static_cast<int32_t>(0x3),
		FitOutside = static_cast<int32_t>(0x4),
		Stretch = static_cast<int32_t>(0x5),
	};
}

