#pragma once
namespace UnityEngine_CoreModule::Unity::Profiling::LowLevel
{
	enum struct MarkerFlags : uint16_t
	{
		Default = static_cast<uint16_t>(0x0),
		Script = static_cast<uint16_t>(0x2),
		ScriptInvoke = static_cast<uint16_t>(0x20),
		ScriptDeepProfiler = static_cast<uint16_t>(0x40),
		AvailabilityEditor = static_cast<uint16_t>(0x4),
		Warning = static_cast<uint16_t>(0x10),
		Counter = static_cast<uint16_t>(0x80),
	};
}

