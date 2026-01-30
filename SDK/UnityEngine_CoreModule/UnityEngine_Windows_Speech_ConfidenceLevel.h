#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	enum struct ConfidenceLevel : int32_t
	{
		High = static_cast<int32_t>(0x0),
		Medium = static_cast<int32_t>(0x1),
		Low = static_cast<int32_t>(0x2),
		Rejected = static_cast<int32_t>(0x3),
	};
}

