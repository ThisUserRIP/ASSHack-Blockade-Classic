#pragma once
namespace mscorlib::System
{
	enum struct TermInfoNumbers : int32_t
	{
		Columns = static_cast<int32_t>(0x0),
		InitTabs = static_cast<int32_t>(0x1),
		Lines = static_cast<int32_t>(0x2),
		LinesOfMemory = static_cast<int32_t>(0x3),
		MagicCookieGlitch = static_cast<int32_t>(0x4),
		PaddingBaudRate = static_cast<int32_t>(0x5),
		VirtualTerminal = static_cast<int32_t>(0x6),
		WidthStatusLine = static_cast<int32_t>(0x7),
		NumLabels = static_cast<int32_t>(0x8),
		LabelHeight = static_cast<int32_t>(0x9),
		LabelWidth = static_cast<int32_t>(0xA),
		MaxAttributes = static_cast<int32_t>(0xB),
		MaximumWindows = static_cast<int32_t>(0xC),
		MaxColors = static_cast<int32_t>(0xD),
		MaxPairs = static_cast<int32_t>(0xE),
		NoColorVideo = static_cast<int32_t>(0xF),
		BufferCapacity = static_cast<int32_t>(0x10),
		DotVertSpacing = static_cast<int32_t>(0x11),
		DotHorzSpacing = static_cast<int32_t>(0x12),
		MaxMicroAddress = static_cast<int32_t>(0x13),
		MaxMicroJump = static_cast<int32_t>(0x14),
		MicroColSize = static_cast<int32_t>(0x15),
		MicroLineSize = static_cast<int32_t>(0x16),
		NumberOfPins = static_cast<int32_t>(0x17),
		OutputResChar = static_cast<int32_t>(0x18),
		OutputResLine = static_cast<int32_t>(0x19),
		OutputResHorzInch = static_cast<int32_t>(0x1A),
		OutputResVertInch = static_cast<int32_t>(0x1B),
		PrintRate = static_cast<int32_t>(0x1C),
		WideCharSize = static_cast<int32_t>(0x1D),
		Buttons = static_cast<int32_t>(0x1E),
		BitImageEntwining = static_cast<int32_t>(0x1F),
		BitImageType = static_cast<int32_t>(0x20),
		Last = static_cast<int32_t>(0x21),
	};
}

