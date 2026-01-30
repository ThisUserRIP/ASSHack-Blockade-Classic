#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct CameraShakeSimpleScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isRunning;
		UnityEngine_AnimationModule::UnityEngine::Animation* anim;
		void Start();
		void ShakeCamera();
		void ShakeCaller(float amount, float duration);
		mscorlib::System::Collections::IEnumerator* Shake(float amount, float duration);
		void _ctor();
	};
}

