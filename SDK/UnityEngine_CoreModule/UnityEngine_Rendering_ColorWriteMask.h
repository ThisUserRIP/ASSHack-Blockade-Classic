#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ColorWriteMask : int32_t
	{
		Alpha = static_cast<int32_t>(0x1),
		Blue = static_cast<int32_t>(0x2),
		Green = static_cast<int32_t>(0x4),
		Red = static_cast<int32_t>(0x8),
		All = static_cast<int32_t>(0xF),
	};
}

