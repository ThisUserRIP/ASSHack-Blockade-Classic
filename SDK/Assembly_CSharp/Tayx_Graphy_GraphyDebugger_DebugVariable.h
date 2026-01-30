#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyDebugger_DebugVariable : int32_t
	{
		Fps = static_cast<int32_t>(0x0),
		Fps_Min = static_cast<int32_t>(0x1),
		Fps_Max = static_cast<int32_t>(0x2),
		Fps_Avg = static_cast<int32_t>(0x3),
		Ram_Allocated = static_cast<int32_t>(0x4),
		Ram_Reserved = static_cast<int32_t>(0x5),
		Ram_Mono = static_cast<int32_t>(0x6),
		Audio_DB = static_cast<int32_t>(0x7),
	};
}

