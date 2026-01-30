#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_InteractionObject.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animation; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionObject_AnimatorEvent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::Animator* animator;
		UnityEngine_AnimationModule::UnityEngine::Animation* animation;
		mscorlib::System::String* animationState;
		float crossfadeTime;
		int32_t layer;
		bool resetNormalizedTime;
		struct StaticFields
		{
			mscorlib::System::String* empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Activate(bool pickUp);
		void Activate(UnityEngine_AnimationModule::UnityEngine::Animator* animator);
		void Activate(UnityEngine_AnimationModule::UnityEngine::Animation* animation);
		void _ctor();
	};
}

