#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Events
{
	enum struct UnityEventCallState : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		EditorAndRuntime = static_cast<int32_t>(0x1),
		RuntimeOnly = static_cast<int32_t>(0x2),
	};
}

