#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	enum struct PhotoCapture_CaptureResultType : int32_t
	{
		Success = static_cast<int32_t>(0x0),
		UnknownError = static_cast<int32_t>(0x1),
	};
}

