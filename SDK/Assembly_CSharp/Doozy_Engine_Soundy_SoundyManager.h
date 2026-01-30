#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyPooler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyDatabase; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyController; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixerGroup; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyData; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundyManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager* s_instance;
			mscorlib::System::String* DATABASE;
			mscorlib::System::String* GENERAL;
			mscorlib::System::String* NEW_SOUND_GROUP;
			mscorlib::System::String* NO_SOUND;
			mscorlib::System::String* SOUNDS;
			mscorlib::System::String* SOUNDY;
			bool ApplicationIsQuitting;
			bool s_initialized;
			Assembly_CSharp::Doozy::Engine::Soundy::SoundyPooler* s_pooler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager* get_Instance();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyPooler* get_Pooler();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyDatabase* get_Database();
		bool get_DebugComponent();
		void Awake();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* GetController();
		static mscorlib::System::String* GetSoundDatabaseFilename(mscorlib::System::String* databaseName);
		static void Init();
		static void KillAllControllers();
		static void MuteAllControllers();
		static void MuteAllSounds();
		static void PauseAllControllers();
		static void PauseAllSounds();
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(mscorlib::System::String* databaseName, mscorlib::System::String* soundName, UnityEngine_CoreModule::UnityEngine::Vector3 position);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_CoreModule::UnityEngine::Vector3 position);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(mscorlib::System::String* databaseName, mscorlib::System::String* soundName, UnityEngine_CoreModule::UnityEngine::Transform* followTarget);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_CoreModule::UnityEngine::Transform* followTarget);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(mscorlib::System::String* databaseName, mscorlib::System::String* soundName);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup, UnityEngine_CoreModule::UnityEngine::Vector3 position, float volume, float pitch, bool loop, float spatialBlend);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup, UnityEngine_CoreModule::UnityEngine::Transform* followTarget, float volume, float pitch, bool loop, float spatialBlend);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Play(Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* data);
		static void StopAllControllers();
		static void StopAllSounds();
		static void UnmuteAllControllers();
		static void UnmuteAllSounds();
		static void UnpauseAllControllers();
		static void UnpauseAllSounds();
		static void _cctor();
	};
}

