#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Progress_ProgressTarget.h"
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixer; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Progress_TargetVariable.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };

namespace Assembly_CSharp::Doozy::Examples
{
	struct ExampleProgressTargetAudioMixer : Assembly_CSharp::Doozy::Engine::Progress::ProgressTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* AudioMixer;
		mscorlib::System::String* ExposedParameter;
		Assembly_CSharp::Doozy::Engine::Progress::TargetVariable TargetVariable;
		float m_targetValue;
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		void _ctor();
	};
}

