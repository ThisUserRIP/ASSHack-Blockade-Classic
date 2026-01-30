#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Events
{
	enum struct PersistentListenerMode : int32_t
	{
		EventDefined = static_cast<int32_t>(0x0),
		Void = static_cast<int32_t>(0x1),
		Object = static_cast<int32_t>(0x2),
		Int = static_cast<int32_t>(0x3),
		Float = static_cast<int32_t>(0x4),
		String = static_cast<int32_t>(0x5),
		Bool = static_cast<int32_t>(0x6),
	};
}

