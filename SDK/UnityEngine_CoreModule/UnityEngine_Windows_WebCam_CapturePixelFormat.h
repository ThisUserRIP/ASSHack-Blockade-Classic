#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	enum struct CapturePixelFormat : int32_t
	{
		BGRA32 = static_cast<int32_t>(0x0),
		NV12 = static_cast<int32_t>(0x1),
		JPEG = static_cast<int32_t>(0x2),
		PNG = static_cast<int32_t>(0x3),
	};
}

