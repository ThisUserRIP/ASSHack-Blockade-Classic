#pragma once
namespace UnityEngine_VideoModule::UnityEngine::Video
{
	enum struct VideoRenderMode : int32_t
	{
		CameraFarPlane = static_cast<int32_t>(0x0),
		CameraNearPlane = static_cast<int32_t>(0x1),
		RenderTexture = static_cast<int32_t>(0x2),
		MaterialOverride = static_cast<int32_t>(0x3),
		APIOnly = static_cast<int32_t>(0x4),
	};
}

