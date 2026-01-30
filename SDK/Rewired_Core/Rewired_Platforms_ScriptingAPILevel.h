#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct ScriptingAPILevel : int32_t
	{
		Net20 = static_cast<int32_t>(0x0),
		Net20Subset = static_cast<int32_t>(0x1),
		Net46 = static_cast<int32_t>(0x2),
		NetStandard20 = static_cast<int32_t>(0x3),
	};
}

