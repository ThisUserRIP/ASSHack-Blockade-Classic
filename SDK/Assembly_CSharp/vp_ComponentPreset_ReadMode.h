#pragma once
namespace Assembly_CSharp
{
	enum struct vp_ComponentPreset_ReadMode : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		LineComment = static_cast<int32_t>(0x1),
		BlockComment = static_cast<int32_t>(0x2),
	};
}

