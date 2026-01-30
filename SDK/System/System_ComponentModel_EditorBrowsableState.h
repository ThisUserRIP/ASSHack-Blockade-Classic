#pragma once
namespace System::System::ComponentModel
{
	enum struct EditorBrowsableState : int32_t
	{
		Always = static_cast<int32_t>(0x0),
		Never = static_cast<int32_t>(0x1),
		Advanced = static_cast<int32_t>(0x2),
	};
}

