#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	enum struct LightMode : uint8_t
	{
		Realtime = static_cast<uint8_t>(0x0),
		Mixed = static_cast<uint8_t>(0x1),
		Baked = static_cast<uint8_t>(0x2),
		Unknown = static_cast<uint8_t>(0x3),
	};
}

