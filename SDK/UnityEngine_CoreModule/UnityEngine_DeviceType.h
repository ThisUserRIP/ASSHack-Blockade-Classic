#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct DeviceType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Handheld = static_cast<int32_t>(0x1),
		Console = static_cast<int32_t>(0x2),
		Desktop = static_cast<int32_t>(0x3),
	};
}

