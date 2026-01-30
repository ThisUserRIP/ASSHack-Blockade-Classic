#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct LightmapBakeType : int32_t
	{
		Realtime = static_cast<int32_t>(0x4),
		Baked = static_cast<int32_t>(0x2),
		Mixed = static_cast<int32_t>(0x1),
	};
}

