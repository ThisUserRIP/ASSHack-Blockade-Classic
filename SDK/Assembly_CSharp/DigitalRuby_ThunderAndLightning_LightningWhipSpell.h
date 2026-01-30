#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningSpellScript.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningWhipSpell : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningSpellScript
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* AttachTo;
		UnityEngine_CoreModule::UnityEngine::GameObject* RotateWith;
		UnityEngine_CoreModule::UnityEngine::GameObject* WhipHandle;
		UnityEngine_CoreModule::UnityEngine::GameObject* WhipStart;
		UnityEngine_CoreModule::UnityEngine::GameObject* WhipSpring;
		UnityEngine_AudioModule::UnityEngine::AudioSource* WhipCrackAudioSource;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector3>* CollisionCallback;
		mscorlib::System::Collections::IEnumerator* WhipForward();
		void Start();
		void Update();
		void OnCastSpell();
		void OnStopSpell();
		void OnActivated();
		void OnDeactivated();
		void _ctor();
	};
}

