#pragma once
namespace UnityEngine_IMGUIModule::UnityEngine
{
	enum struct GUILayoutOption_Type : int32_t
	{
		fixedWidth = static_cast<int32_t>(0x0),
		fixedHeight = static_cast<int32_t>(0x1),
		minWidth = static_cast<int32_t>(0x2),
		maxWidth = static_cast<int32_t>(0x3),
		minHeight = static_cast<int32_t>(0x4),
		maxHeight = static_cast<int32_t>(0x5),
		stretchWidth = static_cast<int32_t>(0x6),
		stretchHeight = static_cast<int32_t>(0x7),
		alignStart = static_cast<int32_t>(0x8),
		alignMiddle = static_cast<int32_t>(0x9),
		alignEnd = static_cast<int32_t>(0xA),
		alignJustify = static_cast<int32_t>(0xB),
		equalSize = static_cast<int32_t>(0xC),
		spacing = static_cast<int32_t>(0xD),
	};
}

