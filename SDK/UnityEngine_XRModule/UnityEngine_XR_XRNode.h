#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct XRNode : int32_t
	{
		LeftEye = static_cast<int32_t>(0x0),
		RightEye = static_cast<int32_t>(0x1),
		CenterEye = static_cast<int32_t>(0x2),
		Head = static_cast<int32_t>(0x3),
		LeftHand = static_cast<int32_t>(0x4),
		RightHand = static_cast<int32_t>(0x5),
		GameController = static_cast<int32_t>(0x6),
		TrackingReference = static_cast<int32_t>(0x7),
		HardwareTracker = static_cast<int32_t>(0x8),
	};
}

