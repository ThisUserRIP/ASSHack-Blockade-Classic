#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct BlendOp : int32_t
	{
		Add = static_cast<int32_t>(0x0),
		Subtract = static_cast<int32_t>(0x1),
		ReverseSubtract = static_cast<int32_t>(0x2),
		Min = static_cast<int32_t>(0x3),
		Max = static_cast<int32_t>(0x4),
		LogicalClear = static_cast<int32_t>(0x5),
		LogicalSet = static_cast<int32_t>(0x6),
		LogicalCopy = static_cast<int32_t>(0x7),
		LogicalCopyInverted = static_cast<int32_t>(0x8),
		LogicalNoop = static_cast<int32_t>(0x9),
		LogicalInvert = static_cast<int32_t>(0xA),
		LogicalAnd = static_cast<int32_t>(0xB),
		LogicalNand = static_cast<int32_t>(0xC),
		LogicalOr = static_cast<int32_t>(0xD),
		LogicalNor = static_cast<int32_t>(0xE),
		LogicalXor = static_cast<int32_t>(0xF),
		LogicalEquivalence = static_cast<int32_t>(0x10),
		LogicalAndReverse = static_cast<int32_t>(0x11),
		LogicalAndInverted = static_cast<int32_t>(0x12),
		LogicalOrReverse = static_cast<int32_t>(0x13),
		LogicalOrInverted = static_cast<int32_t>(0x14),
		Multiply = static_cast<int32_t>(0x15),
		Screen = static_cast<int32_t>(0x16),
		Overlay = static_cast<int32_t>(0x17),
		Darken = static_cast<int32_t>(0x18),
		Lighten = static_cast<int32_t>(0x19),
		ColorDodge = static_cast<int32_t>(0x1A),
		ColorBurn = static_cast<int32_t>(0x1B),
		HardLight = static_cast<int32_t>(0x1C),
		SoftLight = static_cast<int32_t>(0x1D),
		Difference = static_cast<int32_t>(0x1E),
		Exclusion = static_cast<int32_t>(0x1F),
		HSLHue = static_cast<int32_t>(0x20),
		HSLSaturation = static_cast<int32_t>(0x21),
		HSLColor = static_cast<int32_t>(0x22),
		HSLLuminosity = static_cast<int32_t>(0x23),
	};
}

