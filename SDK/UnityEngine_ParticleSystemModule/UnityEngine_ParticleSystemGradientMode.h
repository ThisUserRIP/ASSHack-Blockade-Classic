#pragma once
namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	enum struct ParticleSystemGradientMode : int32_t
	{
		Color = static_cast<int32_t>(0x0),
		Gradient = static_cast<int32_t>(0x1),
		TwoColors = static_cast<int32_t>(0x2),
		TwoGradients = static_cast<int32_t>(0x3),
		RandomColor = static_cast<int32_t>(0x4),
	};
}

