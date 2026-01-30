#pragma once
namespace UnityEngine_AudioModule::UnityEngine
{
	enum struct AudioRolloffMode : int32_t
	{
		Logarithmic = static_cast<int32_t>(0x0),
		Linear = static_cast<int32_t>(0x1),
		Custom = static_cast<int32_t>(0x2),
	};
}

