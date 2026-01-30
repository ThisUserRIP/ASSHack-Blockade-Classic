#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_Soundy_SoundGroupData_PlayMode.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_RangedFloat.h"
namespace Assembly_CSharp::Doozy::Engine { struct RangedFloat; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct AudioData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyController; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixerGroup; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundGroupData : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* DatabaseName;
		mscorlib::System::String* SoundName;
		bool IgnoreListenerPause;
		Assembly_CSharp::Doozy::Engine::RangedFloat Volume;
		Assembly_CSharp::Doozy::Engine::RangedFloat Pitch;
		float SpatialBlend;
		bool Loop;
		Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData_PlayMode Mode;
		bool ResetSequenceAfterInactiveTime;
		float SequenceResetTime;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::AudioData>* Sounds;
		int32_t m_lastPlayedSoundsIndex;
		float m_lastPlayedSoundTime;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::AudioData>* m_playedSounds;
		Assembly_CSharp::Doozy::Engine::Soundy::AudioData* m_lastPlayedAudioData;
		struct StaticFields
		{
			bool DEFAULT_IGNORE_LISTENER_PAUSE;
			bool DEFAULT_LOOP;
			bool DEFAULT_RESET_SEQUENCE_AFTER_INACTIVE_TIME;
			float DEFAULT_PITCH_;
			float DEFAULT_SEQUENCE_RESET_TIME;
			float DEFAULT_SPATIAL_BLEND;
			float DEFAULT_VOLUME;
			float MAX_PITCH;
			float MAX_SPATIAL_BLEND;
			float MAX_VOLUME;
			float MIN_PITCH;
			float MIN_SPATIAL_BLEND;
			float MIN_VOLUME;
			Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData_PlayMode DEFAULT_PLAY_MODE;
			mscorlib::System::String* DEFAULT_SOUND_NAME;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_HasMissingAudioClips();
		bool get_HasSound();
		float get_RandomPitch();
		float get_RandomVolume();
		void Reset();
		bool Contains(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_CoreModule::UnityEngine::Transform* followTarget, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup);
		void PlaySoundPreview(UnityEngine_AudioModule::UnityEngine::AudioSource* audioSource, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup, UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip);
		void PlaySoundPreview(UnityEngine_AudioModule::UnityEngine::AudioSource* audioSource, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup);
		void StopSoundPreview(UnityEngine_AudioModule::UnityEngine::AudioSource* audioSource);
		void SetDirty(bool saveAssets);
		Assembly_CSharp::Doozy::Engine::Soundy::AudioData* GetAudioData(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData_PlayMode playMode);
		void _ctor();
	};
}

