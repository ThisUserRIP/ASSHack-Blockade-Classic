#pragma once
namespace System::System::ComponentModel
{
	enum struct PropertyTabScope : int32_t
	{
		Static = static_cast<int32_t>(0x0),
		Global = static_cast<int32_t>(0x1),
		Document = static_cast<int32_t>(0x2),
		Component = static_cast<int32_t>(0x3),
	};
}

