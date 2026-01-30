#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_AnimatorUpdateMode.h"
#include "UnityEngine_StateInfoIndex.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorStateInfo; };
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorStateInfo; };
#include "UnityEngine_AnimatorStateInfo.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorTransitionInfo; };
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorTransitionInfo; };
#include "UnityEngine_AnimatorTransitionInfo.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorControllerParameter; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityEngine_HumanBodyBones.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct RuntimeAnimatorController; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct Animator : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_isHuman();
		float GetFloat(int32_t id);
		void SetFloat(mscorlib::System::String* name, float value);
		void SetFloat(int32_t id, float value);
		bool GetBool(mscorlib::System::String* name);
		bool GetBool(int32_t id);
		void SetBool(mscorlib::System::String* name, bool value);
		void SetBool(int32_t id, bool value);
		int32_t GetInteger(int32_t id);
		void SetInteger(mscorlib::System::String* name, int32_t value);
		void SetInteger(int32_t id, int32_t value);
		void SetTrigger(mscorlib::System::String* name);
		void SetTrigger(int32_t id);
		void ResetTrigger(mscorlib::System::String* name);
		void set_applyRootMotion(bool value);
		UnityEngine_AnimationModule::UnityEngine::AnimatorUpdateMode get_updateMode();
		void set_updateMode(UnityEngine_AnimationModule::UnityEngine::AnimatorUpdateMode value);
		int32_t get_layerCount();
		void SetLayerWeight(int32_t layerIndex, float weight);
		void GetAnimatorStateInfo(int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::StateInfoIndex stateInfoIndex, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo& info);
		UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);
		UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);
		void GetAnimatorTransitionInfo(int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::AnimatorTransitionInfo& info);
		UnityEngine_AnimationModule::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);
		bool IsInTransition(int32_t layerIndex);
		IL2CPP::Array<UnityEngine_AnimationModule::UnityEngine::AnimatorControllerParameter*>* get_parameters();
		void CrossFade(mscorlib::System::String* stateName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset);
		void CrossFade(mscorlib::System::String* stateName, float normalizedTransitionDuration, int32_t layer);
		void CrossFade(mscorlib::System::String* stateName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset, float normalizedTransitionTime);
		void CrossFade(int32_t stateHashName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset, float normalizedTransitionTime);
		void Play(int32_t stateNameHash, int32_t layer, float normalizedTime);
		UnityEngine_CoreModule::UnityEngine::Transform* GetBoneTransform(UnityEngine_AnimationModule::UnityEngine::HumanBodyBones humanBoneId);
		UnityEngine_CoreModule::UnityEngine::Transform* GetBoneTransformInternal(int32_t humanBoneId);
		UnityEngine_AnimationModule::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController();
		bool get_hasBoundPlayables();
		static int32_t StringToHash(mscorlib::System::String* name);
		void SetFloatString(mscorlib::System::String* name, float value);
		void SetFloatID(int32_t id, float value);
		float GetFloatID(int32_t id);
		void SetBoolString(mscorlib::System::String* name, bool value);
		void SetBoolID(int32_t id, bool value);
		bool GetBoolString(mscorlib::System::String* name);
		bool GetBoolID(int32_t id);
		void SetIntegerString(mscorlib::System::String* name, int32_t value);
		void SetIntegerID(int32_t id, int32_t value);
		int32_t GetIntegerID(int32_t id);
		void SetTriggerString(mscorlib::System::String* name);
		void SetTriggerID(int32_t id);
		void ResetTriggerString(mscorlib::System::String* name);
	};
}

