#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct StereoTargetEyeMask : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Left = static_cast<int32_t>(0x1),
		Right = static_cast<int32_t>(0x2),
		Both = static_cast<int32_t>(0x3),
	};
}

