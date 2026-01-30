#include "Doozy_Engine_UI_UIToggleBehavior.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIToggleBehavior");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_DefaultPresetCategory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultPresetCategory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_DefaultPresetName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultPresetName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_AnimatorsCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AnimatorsCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_BehaviorType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BehaviorType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType>(*(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasAnimation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasAnimation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasAnimators()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasAnimators");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasAnimatorEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasAnimatorEvents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasEffect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasEffect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasGameEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasGameEvents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasPunchAnimation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasPunchAnimation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasSound()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasSound");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasStateAnimation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasStateAnimation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::get_HasUnityEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasUnityEvents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType behaviorType, bool enabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIToggleBehaviorType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&behaviorType;
	params[1] = (intptr_t)&enabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::GetAnimationTotalDuration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationTotalDuration");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::Invoke(Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle, bool playAnimation, bool playSound, bool executeEffect, bool executeAnimatorEvents, bool sendGameEvents, bool executeUnityEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "Doozy.Engine.UI.UIToggle", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)toggle;
	params[1] = (intptr_t)&playAnimation;
	params[2] = (intptr_t)&playSound;
	params[3] = (intptr_t)&executeEffect;
	params[4] = (intptr_t)&executeAnimatorEvents;
	params[5] = (intptr_t)&sendGameEvents;
	params[6] = (intptr_t)&executeUnityEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::LoadPreset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadPreset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::LoadPreset(mscorlib::System::String* presetCategory, mscorlib::System::String* presetName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadPreset", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)presetCategory;
	params[1] = (intptr_t)presetName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::PlayAnimation(Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle, bool withSound, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayAnimation", std::vector<std::string> { "Doozy.Engine.UI.UIToggle", "System.Boolean", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)toggle;
	params[1] = (intptr_t)&withSound;
	params[2] = (intptr_t)onStartCallback;
	params[3] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::Reset(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType behaviorType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "Doozy.Engine.UI.UIToggleBehaviorType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&behaviorType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::InvokeCallbacks(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeCallbacks", std::vector<std::string> { "Doozy.Engine.UI.Animation.UIAnimation", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)onStartCallback;
	params[2] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::InvokeCallbackAfterDelay(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* callback, float delay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeCallbackAfterDelay", std::vector<std::string> { "UnityEngine.Events.UnityAction", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&delay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::GetAnimationType(Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonAnimationType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnimationType", std::vector<std::string> { "Doozy.Engine.UI.Animation.ButtonAnimationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType>(*(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior::GetDefaultDisableInterval(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultDisableInterval", std::vector<std::string> { "Doozy.Engine.UI.UIToggleBehaviorType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
