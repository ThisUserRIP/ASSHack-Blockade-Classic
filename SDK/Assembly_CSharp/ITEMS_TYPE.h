#pragma once
namespace Assembly_CSharp
{
	enum struct ITEMS_TYPE : int32_t
	{
		WEAPONS = static_cast<int32_t>(0x1),
		VEHICLES = static_cast<int32_t>(0x2),
		CUSTOMIZATION = static_cast<int32_t>(0x3),
		AMMUNITION = static_cast<int32_t>(0x4),
		OTHER = static_cast<int32_t>(0x5),
	};
}

