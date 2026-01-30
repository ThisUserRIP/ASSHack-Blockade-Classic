#pragma once
namespace UnityEngine_VideoModule::UnityEngine::Video
{
	enum struct VideoTimeSource : int32_t
	{
		AudioDSPTimeSource = static_cast<int32_t>(0x0),
		GameTimeSource = static_cast<int32_t>(0x1),
	};
}

