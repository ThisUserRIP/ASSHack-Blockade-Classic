#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Animations_AnimationStream.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimationStream; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct IAnimationJob
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void ProcessAnimation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
		void ProcessRootMotion(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream);
	};
}

