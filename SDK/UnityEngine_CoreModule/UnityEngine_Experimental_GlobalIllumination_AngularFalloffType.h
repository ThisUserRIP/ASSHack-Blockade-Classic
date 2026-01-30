#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	enum struct AngularFalloffType : uint8_t
	{
		LUT = static_cast<uint8_t>(0x0),
		AnalyticAndInnerAngle = static_cast<uint8_t>(0x1),
	};
}

