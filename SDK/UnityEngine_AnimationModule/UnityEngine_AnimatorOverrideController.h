#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_RuntimeAnimatorController.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorOverrideController_OnOverrideControllerDirtyCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct AnimatorOverrideController : UnityEngine_AnimationModule::UnityEngine::RuntimeAnimatorController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;
		static void OnInvalidateOverrideController(UnityEngine_AnimationModule::UnityEngine::AnimatorOverrideController* controller);
	};
}

