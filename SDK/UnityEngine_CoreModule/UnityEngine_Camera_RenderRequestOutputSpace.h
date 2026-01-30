#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct Camera_RenderRequestOutputSpace : int32_t
	{
		ScreenSpace = static_cast<int32_t>(0xFFFFFFFF),
		UV0 = static_cast<int32_t>(0x0),
		UV1 = static_cast<int32_t>(0x1),
		UV2 = static_cast<int32_t>(0x2),
		UV3 = static_cast<int32_t>(0x3),
		UV4 = static_cast<int32_t>(0x4),
		UV5 = static_cast<int32_t>(0x5),
		UV6 = static_cast<int32_t>(0x6),
		UV7 = static_cast<int32_t>(0x7),
		UV8 = static_cast<int32_t>(0x8),
	};
}

