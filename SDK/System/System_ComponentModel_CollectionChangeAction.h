#pragma once
namespace System::System::ComponentModel
{
	enum struct CollectionChangeAction : int32_t
	{
		Add = static_cast<int32_t>(0x1),
		Remove = static_cast<int32_t>(0x2),
		Refresh = static_cast<int32_t>(0x3),
	};
}

