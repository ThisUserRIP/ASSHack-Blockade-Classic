#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	enum struct SpeechSystemStatus : int32_t
	{
		Stopped = static_cast<int32_t>(0x0),
		Running = static_cast<int32_t>(0x1),
		Failed = static_cast<int32_t>(0x2),
	};
}

