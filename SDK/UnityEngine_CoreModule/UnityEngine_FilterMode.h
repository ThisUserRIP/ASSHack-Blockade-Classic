#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct FilterMode : int32_t
	{
		Point = static_cast<int32_t>(0x0),
		Bilinear = static_cast<int32_t>(0x1),
		Trilinear = static_cast<int32_t>(0x2),
	};
}

