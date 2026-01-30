#pragma once
namespace UnityEngine_ScreenCaptureModule::UnityEngine
{
	enum struct ScreenCapture_StereoScreenCaptureMode : int32_t
	{
		LeftEye = static_cast<int32_t>(0x1),
		RightEye = static_cast<int32_t>(0x2),
		BothEyes = static_cast<int32_t>(0x3),
	};
}

