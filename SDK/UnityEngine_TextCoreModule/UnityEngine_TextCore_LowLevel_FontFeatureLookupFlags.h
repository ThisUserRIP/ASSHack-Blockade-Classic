#pragma once
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	enum struct FontFeatureLookupFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IgnoreLigatures = static_cast<int32_t>(0x4),
		IgnoreSpacingAdjustments = static_cast<int32_t>(0x100),
	};
}

