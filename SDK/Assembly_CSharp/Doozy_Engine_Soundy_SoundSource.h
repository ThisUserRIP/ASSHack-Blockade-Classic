#pragma once
namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	enum struct SoundSource : int32_t
	{
		Soundy = static_cast<int32_t>(0x0),
		AudioClip = static_cast<int32_t>(0x1),
		MasterAudio = static_cast<int32_t>(0x2),
	};
}

