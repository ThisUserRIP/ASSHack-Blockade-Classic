#pragma once
namespace UnityEngine_TextRenderingModule::UnityEngine
{
	enum struct TextGenerationError : int32_t
	{
		None = static_cast<int32_t>(0x0),
		CustomSizeOnNonDynamicFont = static_cast<int32_t>(0x1),
		CustomStyleOnNonDynamicFont = static_cast<int32_t>(0x2),
		NoFont = static_cast<int32_t>(0x4),
	};
}

