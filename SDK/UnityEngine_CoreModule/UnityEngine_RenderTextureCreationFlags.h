#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct RenderTextureCreationFlags : int32_t
	{
		MipMap = static_cast<int32_t>(0x1),
		AutoGenerateMips = static_cast<int32_t>(0x2),
		SRGB = static_cast<int32_t>(0x4),
		EyeTexture = static_cast<int32_t>(0x8),
		EnableRandomWrite = static_cast<int32_t>(0x10),
		CreatedFromScript = static_cast<int32_t>(0x20),
		AllowVerticalFlip = static_cast<int32_t>(0x80),
		NoResolvedColorSurface = static_cast<int32_t>(0x100),
		DynamicallyScalable = static_cast<int32_t>(0x400),
		BindMS = static_cast<int32_t>(0x800),
	};
}

