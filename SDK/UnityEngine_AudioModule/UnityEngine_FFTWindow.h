#pragma once
namespace UnityEngine_AudioModule::UnityEngine
{
	enum struct FFTWindow : int32_t
	{
		Rectangular = static_cast<int32_t>(0x0),
		Triangle = static_cast<int32_t>(0x1),
		Hamming = static_cast<int32_t>(0x2),
		Hanning = static_cast<int32_t>(0x3),
		Blackman = static_cast<int32_t>(0x4),
		BlackmanHarris = static_cast<int32_t>(0x5),
	};
}

