#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct CopyTextureSupport : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Basic = static_cast<int32_t>(0x1),
		Copy3D = static_cast<int32_t>(0x2),
		DifferentTypes = static_cast<int32_t>(0x4),
		TextureToRT = static_cast<int32_t>(0x8),
		RTToTexture = static_cast<int32_t>(0x10),
	};
}

