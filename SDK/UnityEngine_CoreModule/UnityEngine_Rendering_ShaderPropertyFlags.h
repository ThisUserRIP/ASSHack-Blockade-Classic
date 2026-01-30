#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ShaderPropertyFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		HideInInspector = static_cast<int32_t>(0x1),
		PerRendererData = static_cast<int32_t>(0x2),
		NoScaleOffset = static_cast<int32_t>(0x4),
		Normal = static_cast<int32_t>(0x8),
		HDR = static_cast<int32_t>(0x10),
		Gamma = static_cast<int32_t>(0x20),
		NonModifiableTextureData = static_cast<int32_t>(0x40),
		MainTexture = static_cast<int32_t>(0x80),
		MainColor = static_cast<int32_t>(0x100),
	};
}

