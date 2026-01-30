#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ControllerSetSelector_Type : int32_t
	{
		All = static_cast<int32_t>(0x0),
		ControllerType = static_cast<int32_t>(0x1),
		HardwareType = static_cast<int32_t>(0x2),
		ControllerTemplateType = static_cast<int32_t>(0x3),
		PersistentControllerInstance = static_cast<int32_t>(0x4),
		SessionControllerInstance = static_cast<int32_t>(0x5),
	};
}

