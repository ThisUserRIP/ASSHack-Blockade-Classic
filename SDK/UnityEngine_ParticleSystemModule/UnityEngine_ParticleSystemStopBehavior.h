#pragma once
namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	enum struct ParticleSystemStopBehavior : int32_t
	{
		StopEmittingAndClear = static_cast<int32_t>(0x0),
		StopEmitting = static_cast<int32_t>(0x1),
	};
}

