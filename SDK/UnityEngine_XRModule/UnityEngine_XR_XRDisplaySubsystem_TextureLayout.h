#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct XRDisplaySubsystem_TextureLayout : int32_t
	{
		Texture2DArray = static_cast<int32_t>(0x1),
		SingleTexture2D = static_cast<int32_t>(0x2),
		SeparateTexture2Ds = static_cast<int32_t>(0x4),
	};
}

