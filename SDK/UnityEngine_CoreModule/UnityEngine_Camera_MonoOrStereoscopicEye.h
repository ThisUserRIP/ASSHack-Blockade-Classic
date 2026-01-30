#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct Camera_MonoOrStereoscopicEye : int32_t
	{
		Left = static_cast<int32_t>(0x0),
		Right = static_cast<int32_t>(0x1),
		Mono = static_cast<int32_t>(0x2),
	};
}

