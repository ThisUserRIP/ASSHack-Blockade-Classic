#pragma once
namespace UnityEngine_VideoModule::UnityEngine::Video
{
	enum struct VideoAudioOutputMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AudioSource = static_cast<int32_t>(0x1),
		Direct = static_cast<int32_t>(0x2),
		APIOnly = static_cast<int32_t>(0x3),
	};
}

