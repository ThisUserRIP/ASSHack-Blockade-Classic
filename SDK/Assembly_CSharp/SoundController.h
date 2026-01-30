#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct SoundController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* _audioClips;
		int32_t _audioChannels;
		float _masterVol;
		float _soundVol;
		float _musicVol;
		bool _linearRollOff;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioSource*>* channels;
		int32_t channel;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioSource*>* _musicChannels;
		int32_t _musicChannel;
		float _currentMusicVol;
		float _fadeTo;
		struct StaticFields
		{
			Assembly_CSharp::SoundController* instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnApplicationQuit();
		void Start();
		void StopMusic(bool fade);
		void FadeUpMusic();
		void FadeDownMusic();
		void UpdateMusicVolume();
		void AddChannels();
		void PlayMusic(UnityEngine_AudioModule::UnityEngine::AudioClip* clip, float volume, float pitch, bool fade);
		void Play(int32_t audioClipIndex, float volume, float pitch);
		void Play(UnityEngine_AudioModule::UnityEngine::AudioClip* clip, float volume, float pitch, UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void Play(UnityEngine_AudioModule::UnityEngine::AudioClip* clip, float volume, float pitch);
		void StopAll();
		void _ctor();
	};
}

