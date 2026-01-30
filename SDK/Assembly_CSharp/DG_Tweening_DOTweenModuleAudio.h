#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\DOTween\DG_Tweening_Plugins_Options_FloatOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct FloatOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixer; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleAudio : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFade(UnityEngine_AudioModule::UnityEngine::AudioSource* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOPitch(UnityEngine_AudioModule::UnityEngine::AudioSource* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOSetFloat(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, mscorlib::System::String* floatName, float endValue, float duration);
		static int32_t DOComplete(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, bool withCallbacks);
		static int32_t DOKill(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, bool complete);
		static int32_t DOFlip(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DOGoto(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, float to, bool andPlay);
		static int32_t DOPause(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DOPlay(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DOPlayBackwards(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DOPlayForward(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DORestart(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DORewind(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DOSmoothRewind(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
		static int32_t DOTogglePause(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target);
	};
}

