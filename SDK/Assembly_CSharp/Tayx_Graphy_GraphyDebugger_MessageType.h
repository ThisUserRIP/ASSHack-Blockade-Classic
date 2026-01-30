#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyDebugger_MessageType : int32_t
	{
		Log = static_cast<int32_t>(0x0),
		Warning = static_cast<int32_t>(0x1),
		Error = static_cast<int32_t>(0x2),
	};
}

