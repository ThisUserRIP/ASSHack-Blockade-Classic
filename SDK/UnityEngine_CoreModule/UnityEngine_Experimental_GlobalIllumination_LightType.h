#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	enum struct LightType : uint8_t
	{
		Directional = static_cast<uint8_t>(0x0),
		Point = static_cast<uint8_t>(0x1),
		Spot = static_cast<uint8_t>(0x2),
		Rectangle = static_cast<uint8_t>(0x3),
		Disc = static_cast<uint8_t>(0x4),
		SpotPyramidShape = static_cast<uint8_t>(0x5),
		SpotBoxShape = static_cast<uint8_t>(0x6),
	};
}

