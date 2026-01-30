#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct AudioData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::AudioClip* AudioClip;
		float Weight;
		struct StaticFields
		{
			float DEFAULT_WEIGHT;
			float MAX_WEIGHT;
			float MIN_WEIGHT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip);
		void _ctor(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, float weight);
		void Reset();
	};
}

