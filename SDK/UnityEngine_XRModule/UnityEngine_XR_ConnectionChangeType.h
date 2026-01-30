#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct ConnectionChangeType : uint32_t
	{
		Connected = static_cast<uint32_t>(0x0),
		Disconnected = static_cast<uint32_t>(0x1),
		ConfigChange = static_cast<uint32_t>(0x2),
	};
}

