#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct CubemapFace : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		PositiveX = static_cast<int32_t>(0x0),
		NegativeX = static_cast<int32_t>(0x1),
		PositiveY = static_cast<int32_t>(0x2),
		NegativeY = static_cast<int32_t>(0x3),
		PositiveZ = static_cast<int32_t>(0x4),
		NegativeZ = static_cast<int32_t>(0x5),
	};
}

