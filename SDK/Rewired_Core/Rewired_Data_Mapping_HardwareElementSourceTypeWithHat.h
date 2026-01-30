#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct HardwareElementSourceTypeWithHat : int32_t
	{
		Button = static_cast<int32_t>(0x0),
		Axis = static_cast<int32_t>(0x1),
		Hat = static_cast<int32_t>(0x2),
		Key = static_cast<int32_t>(0x3),
		Custom = static_cast<int32_t>(0x64),
	};
}

