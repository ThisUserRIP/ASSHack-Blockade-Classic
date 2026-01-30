#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct CompareFunction : int32_t
	{
		Disabled = static_cast<int32_t>(0x0),
		Never = static_cast<int32_t>(0x1),
		Less = static_cast<int32_t>(0x2),
		Equal = static_cast<int32_t>(0x3),
		LessEqual = static_cast<int32_t>(0x4),
		Greater = static_cast<int32_t>(0x5),
		NotEqual = static_cast<int32_t>(0x6),
		GreaterEqual = static_cast<int32_t>(0x7),
		Always = static_cast<int32_t>(0x8),
	};
}

