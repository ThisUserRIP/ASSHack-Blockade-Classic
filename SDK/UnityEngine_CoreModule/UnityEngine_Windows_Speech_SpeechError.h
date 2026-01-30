#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	enum struct SpeechError : int32_t
	{
		NoError = static_cast<int32_t>(0x0),
		TopicLanguageNotSupported = static_cast<int32_t>(0x1),
		GrammarLanguageMismatch = static_cast<int32_t>(0x2),
		GrammarCompilationFailure = static_cast<int32_t>(0x3),
		AudioQualityFailure = static_cast<int32_t>(0x4),
		PauseLimitExceeded = static_cast<int32_t>(0x5),
		TimeoutExceeded = static_cast<int32_t>(0x6),
		NetworkFailure = static_cast<int32_t>(0x7),
		MicrophoneUnavailable = static_cast<int32_t>(0x8),
		UnknownError = static_cast<int32_t>(0x9),
	};
}

