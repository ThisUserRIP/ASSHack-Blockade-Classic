#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct OperatingSystemFamily : int32_t
	{
		Other = static_cast<int32_t>(0x0),
		MacOSX = static_cast<int32_t>(0x1),
		Windows = static_cast<int32_t>(0x2),
		Linux = static_cast<int32_t>(0x3),
	};
}

