#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct LightRenderMode : int32_t
	{
		Auto = static_cast<int32_t>(0x0),
		ForcePixel = static_cast<int32_t>(0x1),
		ForceVertex = static_cast<int32_t>(0x2),
	};
}

