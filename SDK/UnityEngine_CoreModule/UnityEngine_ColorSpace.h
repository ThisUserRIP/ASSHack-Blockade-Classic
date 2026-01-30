#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct ColorSpace : int32_t
	{
		Uninitialized = static_cast<int32_t>(0xFFFFFFFF),
		Gamma = static_cast<int32_t>(0x0),
		Linear = static_cast<int32_t>(0x1),
	};
}

