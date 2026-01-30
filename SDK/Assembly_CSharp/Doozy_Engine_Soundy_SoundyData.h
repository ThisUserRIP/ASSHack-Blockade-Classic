#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Soundy_SoundSource.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixerGroup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundGroupData; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundyData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Soundy::SoundSource SoundSource;
		mscorlib::System::String* DatabaseName;
		mscorlib::System::String* SoundName;
		UnityEngine_AudioModule::UnityEngine::AudioClip* AudioClip;
		UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* OutputAudioMixerGroup;
		void _ctor();
		Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* GetAudioData();
		void Reset();
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SetAudioClip(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SetDatabaseName(mscorlib::System::String* databaseName);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SetOutputAudioMixerGroup(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* audioMixerGroup);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SetSoundName(mscorlib::System::String* soundName);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SetSoundSource(Assembly_CSharp::Doozy::Engine::Soundy::SoundSource soundSource);
	};
}

