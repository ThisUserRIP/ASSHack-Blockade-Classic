#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct DynamicResUpscaleFilter : uint8_t
	{
		Bilinear = static_cast<uint8_t>(0x0),
		CatmullRom = static_cast<uint8_t>(0x1),
		Lanczos = static_cast<uint8_t>(0x2),
		ContrastAdaptiveSharpen = static_cast<uint8_t>(0x3),
	};
}

