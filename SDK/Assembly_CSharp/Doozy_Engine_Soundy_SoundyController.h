#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixerGroup; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundyController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* m_transform;
		UnityEngine_CoreModule::UnityEngine::Transform* m_followTarget;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_audioSource;
		bool m_inUse;
		float m_playProgress;
		bool m_isPaused;
		bool m_isMuted;
		float m_lastPlayedTime;
		bool m_isPlaying;
		bool m_autoPaused;
		bool m_muted;
		bool m_paused;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::SoundyController>* s_database;
			bool s_pauseAllControllers;
			bool s_muteAllControllers;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_DebugComponent();
		static bool get_PauseAllControllers();
		static void set_PauseAllControllers(bool value);
		static bool get_MuteAllControllers();
		static void set_MuteAllControllers(bool value);
		UnityEngine_AudioModule::UnityEngine::AudioSource* get_AudioSource();
		void set_AudioSource(UnityEngine_AudioModule::UnityEngine::AudioSource* value);
		bool get_InUse();
		void set_InUse(bool value);
		float get_PlayProgress();
		void set_PlayProgress(float value);
		bool get_IsPaused();
		void set_IsPaused(bool value);
		bool get_IsMuted();
		void set_IsMuted(bool value);
		float get_LastPlayedTime();
		void set_LastPlayedTime(float value);
		float get_IdleDuration();
		void Reset();
		void Awake();
		void OnDestroy();
		void Update();
		void Kill();
		void Mute();
		void Pause();
		void Play();
		void SetFollowTarget(UnityEngine_CoreModule::UnityEngine::Transform* followTarget);
		void SetOutputAudioMixerGroup(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup);
		void SetPosition(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void SetSourceProperties(UnityEngine_AudioModule::UnityEngine::AudioClip* clip, float volume, float pitch, bool loop, float spatialBlend);
		void Stop();
		void Unmute();
		void Unpause();
		void FollowTarget();
		void ResetController();
		void UpdateLastPlayedTime();
		void UpdatePlayProgress();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* GetController();
		static void KillAll();
		static void MuteAll();
		static void PauseAll();
		static void RemoveNullControllersFromDatabase();
		static void StopAll();
		static void UnmuteAll();
		static void UnpauseAll();
		void _ctor();
		static void _cctor();
	};
}

