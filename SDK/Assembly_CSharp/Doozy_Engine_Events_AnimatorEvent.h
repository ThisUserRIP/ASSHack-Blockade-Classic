#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Events_AnimatorEvent_ParameterType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };

namespace Assembly_CSharp::Doozy::Engine::Events
{
	struct AnimatorEvent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::Animator* Animator;
		bool BoolValue;
		float FloatValue;
		int32_t IntValue;
		mscorlib::System::String* ParameterName;
		bool ResetTrigger;
		Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent_ParameterType TargetParameterType;
		void _ctor();
		void _ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName, bool boolValue);
		void _ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName, int32_t intValue);
		void _ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName, float floatValue);
		void _ctor(UnityEngine_AnimationModule::UnityEngine::Animator* animator, mscorlib::System::String* parameterName);
		void Invoke(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* callback);
		void Reset();
		void SetValue();
		static void InvokeCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* callback, bool value);
	};
}

