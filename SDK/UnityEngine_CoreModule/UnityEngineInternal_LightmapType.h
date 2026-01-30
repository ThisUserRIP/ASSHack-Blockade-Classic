#pragma once
namespace UnityEngine_CoreModule::UnityEngineInternal
{
	enum struct LightmapType : int32_t
	{
		NoLightmap = static_cast<int32_t>(0xFFFFFFFF),
		StaticLightmap = static_cast<int32_t>(0x0),
		DynamicLightmap = static_cast<int32_t>(0x1),
	};
}

