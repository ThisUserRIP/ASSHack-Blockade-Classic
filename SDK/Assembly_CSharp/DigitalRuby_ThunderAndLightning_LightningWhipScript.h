#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningWhipScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::AudioClip* WhipCrack;
		UnityEngine_AudioModule::UnityEngine::AudioClip* WhipCrackThunder;
		UnityEngine_AudioModule::UnityEngine::AudioSource* audioSource;
		UnityEngine_CoreModule::UnityEngine::GameObject* whipStart;
		UnityEngine_CoreModule::UnityEngine::GameObject* whipEndStrike;
		UnityEngine_CoreModule::UnityEngine::GameObject* whipHandle;
		UnityEngine_CoreModule::UnityEngine::GameObject* whipSpring;
		UnityEngine_CoreModule::UnityEngine::Vector2 prevDrag;
		bool dragging;
		bool canWhip;
		mscorlib::System::Collections::IEnumerator* WhipForward();
		void Start();
		void Update();
		void _ctor();
	};
}

