#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_AudioBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixerGroup; };
#include "UnityEngine_AudioRolloffMode.h"

namespace UnityEngine_AudioModule::UnityEngine
{
	struct AudioSource : UnityEngine_AudioModule::UnityEngine::AudioBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float GetPitch(UnityEngine_AudioModule::UnityEngine::AudioSource* source);
		static void SetPitch(UnityEngine_AudioModule::UnityEngine::AudioSource* source, float pitch);
		static void PlayHelper(UnityEngine_AudioModule::UnityEngine::AudioSource* source, uint64_t delay);
		static void PlayOneShotHelper(UnityEngine_AudioModule::UnityEngine::AudioSource* source, UnityEngine_AudioModule::UnityEngine::AudioClip* clip, float volumeScale);
		void Stop(bool stopOneShots);
		float get_volume();
		void set_volume(float value);
		float get_pitch();
		void set_pitch(float value);
		float get_time();
		UnityEngine_AudioModule::UnityEngine::AudioClip* get_clip();
		void set_clip(UnityEngine_AudioModule::UnityEngine::AudioClip* value);
		void set_outputAudioMixerGroup(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* value);
		void Play();
		void PlayOneShot(UnityEngine_AudioModule::UnityEngine::AudioClip* clip);
		void PlayOneShot(UnityEngine_AudioModule::UnityEngine::AudioClip* clip, float volumeScale);
		void Stop();
		void Pause();
		void UnPause();
		bool get_isPlaying();
		bool get_loop();
		void set_loop(bool value);
		bool get_playOnAwake();
		void set_playOnAwake(bool value);
		void set_ignoreListenerPause(bool value);
		float get_spatialBlend();
		void set_spatialBlend(float value);
		void set_dopplerLevel(float value);
		void set_mute(bool value);
		void set_minDistance(float value);
		void set_maxDistance(float value);
		void set_rolloffMode(UnityEngine_AudioModule::UnityEngine::AudioRolloffMode value);
	};
}

