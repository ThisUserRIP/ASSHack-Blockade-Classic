#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct VRTextureUsage : int32_t
	{
		None = static_cast<int32_t>(0x0),
		OneEye = static_cast<int32_t>(0x1),
		TwoEyes = static_cast<int32_t>(0x2),
		DeviceSpecific = static_cast<int32_t>(0x3),
	};
}

