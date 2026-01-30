#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct FontFeatureLookupFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IgnoreLigatures = static_cast<int32_t>(0x4),
		IgnoreSpacingAdjustments = static_cast<int32_t>(0x100),
	};
}

