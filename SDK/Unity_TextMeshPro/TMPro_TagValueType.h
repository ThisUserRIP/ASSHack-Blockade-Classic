#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TagValueType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		NumericalValue = static_cast<int32_t>(0x1),
		StringValue = static_cast<int32_t>(0x2),
		ColorValue = static_cast<int32_t>(0x4),
	};
}

