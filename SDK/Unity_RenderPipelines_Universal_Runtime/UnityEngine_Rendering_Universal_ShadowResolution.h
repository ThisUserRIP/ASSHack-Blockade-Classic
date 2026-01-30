#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ShadowResolution : int32_t
	{
		_256 = static_cast<int32_t>(0x100),
		_512 = static_cast<int32_t>(0x200),
		_1024 = static_cast<int32_t>(0x400),
		_2048 = static_cast<int32_t>(0x800),
		_4096 = static_cast<int32_t>(0x1000),
	};
}

