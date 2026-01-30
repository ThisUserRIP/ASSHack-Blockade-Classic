#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	enum struct FrameData_Flags : int32_t
	{
		Evaluate = static_cast<int32_t>(0x1),
		SeekOccured = static_cast<int32_t>(0x2),
		Loop = static_cast<int32_t>(0x4),
		Hold = static_cast<int32_t>(0x8),
		EffectivePlayStateDelayed = static_cast<int32_t>(0x10),
		EffectivePlayStatePlaying = static_cast<int32_t>(0x20),
	};
}

