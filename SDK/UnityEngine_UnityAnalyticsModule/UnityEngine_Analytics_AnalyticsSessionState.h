#pragma once
namespace UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics
{
	enum struct AnalyticsSessionState : int32_t
	{
		kSessionStopped = static_cast<int32_t>(0x0),
		kSessionStarted = static_cast<int32_t>(0x1),
		kSessionPaused = static_cast<int32_t>(0x2),
		kSessionResumed = static_cast<int32_t>(0x3),
	};
}

