#pragma once
namespace Assembly_CSharp_firstpass::RootMotion
{
	enum struct InterpolationMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		InOutCubic = static_cast<int32_t>(0x1),
		InOutQuintic = static_cast<int32_t>(0x2),
		InOutSine = static_cast<int32_t>(0x3),
		InQuintic = static_cast<int32_t>(0x4),
		InQuartic = static_cast<int32_t>(0x5),
		InCubic = static_cast<int32_t>(0x6),
		InQuadratic = static_cast<int32_t>(0x7),
		InElastic = static_cast<int32_t>(0x8),
		InElasticSmall = static_cast<int32_t>(0x9),
		InElasticBig = static_cast<int32_t>(0xA),
		InSine = static_cast<int32_t>(0xB),
		InBack = static_cast<int32_t>(0xC),
		OutQuintic = static_cast<int32_t>(0xD),
		OutQuartic = static_cast<int32_t>(0xE),
		OutCubic = static_cast<int32_t>(0xF),
		OutInCubic = static_cast<int32_t>(0x10),
		OutInQuartic = static_cast<int32_t>(0x11),
		OutElastic = static_cast<int32_t>(0x12),
		OutElasticSmall = static_cast<int32_t>(0x13),
		OutElasticBig = static_cast<int32_t>(0x14),
		OutSine = static_cast<int32_t>(0x15),
		OutBack = static_cast<int32_t>(0x16),
		OutBackCubic = static_cast<int32_t>(0x17),
		OutBackQuartic = static_cast<int32_t>(0x18),
		BackInCubic = static_cast<int32_t>(0x19),
		BackInQuartic = static_cast<int32_t>(0x1A),
	};
}

