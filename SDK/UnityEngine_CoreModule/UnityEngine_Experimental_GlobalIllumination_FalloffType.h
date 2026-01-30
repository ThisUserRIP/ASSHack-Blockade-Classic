#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	enum struct FalloffType : uint8_t
	{
		InverseSquared = static_cast<uint8_t>(0x0),
		InverseSquaredNoRangeAttenuation = static_cast<uint8_t>(0x1),
		Linear = static_cast<uint8_t>(0x2),
		Legacy = static_cast<uint8_t>(0x3),
		Undefined = static_cast<uint8_t>(0x4),
	};
}

