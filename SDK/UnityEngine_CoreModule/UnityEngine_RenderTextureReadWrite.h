#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct RenderTextureReadWrite : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Linear = static_cast<int32_t>(0x1),
		sRGB = static_cast<int32_t>(0x2),
	};
}

