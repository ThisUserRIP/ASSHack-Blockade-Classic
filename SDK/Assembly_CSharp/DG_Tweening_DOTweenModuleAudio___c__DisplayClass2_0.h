#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleAudio.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleAudio; };
namespace UnityEngine_AudioModule::UnityEngine::Audio { struct AudioMixer; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleAudio___c__DisplayClass2_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target;
		mscorlib::System::String* floatName;
		void _ctor();
		float _DOSetFloat_b__0();
		void _DOSetFloat_b__1(float x);
	};
}

