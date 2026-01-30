#pragma once
namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	enum struct ParticleSystemCurveMode : int32_t
	{
		Constant = static_cast<int32_t>(0x0),
		Curve = static_cast<int32_t>(0x1),
		TwoCurves = static_cast<int32_t>(0x2),
		TwoConstants = static_cast<int32_t>(0x3),
	};
}

