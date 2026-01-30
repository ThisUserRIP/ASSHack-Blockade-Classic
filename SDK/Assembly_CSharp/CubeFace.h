#pragma once
namespace Assembly_CSharp
{
	enum struct CubeFace : int32_t
	{
		Front = static_cast<int32_t>(0x0),
		Back = static_cast<int32_t>(0x1),
		Right = static_cast<int32_t>(0x2),
		Left = static_cast<int32_t>(0x3),
		Top = static_cast<int32_t>(0x4),
		Bottom = static_cast<int32_t>(0x5),
	};
}

