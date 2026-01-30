#pragma once
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	enum struct LightningCustomTransformState : int32_t
	{
		Started = static_cast<int32_t>(0x0),
		Executing = static_cast<int32_t>(0x1),
		Ended = static_cast<int32_t>(0x2),
	};
}

