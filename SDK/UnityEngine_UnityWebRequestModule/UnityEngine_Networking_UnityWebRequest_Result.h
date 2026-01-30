#pragma once
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	enum struct UnityWebRequest_Result : int32_t
	{
		InProgress = static_cast<int32_t>(0x0),
		Success = static_cast<int32_t>(0x1),
		ConnectionError = static_cast<int32_t>(0x2),
		ProtocolError = static_cast<int32_t>(0x3),
		DataProcessingError = static_cast<int32_t>(0x4),
	};
}

