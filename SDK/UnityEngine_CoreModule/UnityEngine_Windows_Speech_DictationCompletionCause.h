#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	enum struct DictationCompletionCause : int32_t
	{
		Complete = static_cast<int32_t>(0x0),
		AudioQualityFailure = static_cast<int32_t>(0x1),
		Canceled = static_cast<int32_t>(0x2),
		TimeoutExceeded = static_cast<int32_t>(0x3),
		PauseLimitExceeded = static_cast<int32_t>(0x4),
		NetworkFailure = static_cast<int32_t>(0x5),
		MicrophoneUnavailable = static_cast<int32_t>(0x6),
		UnknownError = static_cast<int32_t>(0x7),
	};
}

