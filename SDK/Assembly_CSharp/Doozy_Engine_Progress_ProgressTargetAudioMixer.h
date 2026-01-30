#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Progress_ProgressTarget.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };

namespace Assembly_CSharp::Doozy::Engine::Progress
{
	struct ProgressTargetAudioMixer : Assembly_CSharp::Doozy::Engine::Progress::ProgressTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ExposedParameterName;
		UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* TargetMixer;
		bool UseLogarithmicConversion;
		struct StaticFields
		{
			float MIN_VALUE;
			float MAX_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		static float GetLogarithmicValue(float value);
		void _ctor();
	};
}

