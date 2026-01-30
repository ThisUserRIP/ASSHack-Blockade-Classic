#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct InputTracking_TrackingStateEventType : int32_t
	{
		NodeAdded = static_cast<int32_t>(0x0),
		NodeRemoved = static_cast<int32_t>(0x1),
		TrackingAcquired = static_cast<int32_t>(0x2),
		TrackingLost = static_cast<int32_t>(0x3),
	};
}

