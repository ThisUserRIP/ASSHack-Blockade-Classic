#pragma once
namespace mscorlib::System::Diagnostics
{
	enum struct DebuggerBrowsableState : int32_t
	{
		Never = static_cast<int32_t>(0x0),
		Collapsed = static_cast<int32_t>(0x2),
		RootHidden = static_cast<int32_t>(0x3),
	};
}

