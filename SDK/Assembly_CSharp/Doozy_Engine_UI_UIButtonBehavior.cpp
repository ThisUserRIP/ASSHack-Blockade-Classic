#include "Doozy_Engine_UI_UIButtonBehavior.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI", "UIButtonBehavior");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_DefaultPresetCategory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultPresetCategory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_DefaultPresetName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultPresetName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_AnimatorsCount()
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
Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_BehaviorType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BehaviorType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType>(*(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasAnimation()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasAnimators()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasAnimatorEvents()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasEffect()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasGameEvents()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasPunchAnimation()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasSound()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasStateAnimation()
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
bool Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::get_HasUnityEvents()
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
void Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::_ctor(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType behaviorType, bool enabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.UIButtonBehaviorType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&behaviorType;
	params[1] = (intptr_t)&enabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::GetAnimationTotalDuration()
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
void Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::LoadPreset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadPreset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::LoadPreset(mscorlib::System::String* presetCategory, mscorlib::System::String* presetName)
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
void Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::PlayAnimation(Assembly_CSharp::Doozy::Engine::UI::UIButton* button, bool withSound, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayAnimation", std::vector<std::string> { "Doozy.Engine.UI.UIButton", "System.Boolean", "UnityEngine.Events.UnityAction", "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)button;
	params[1] = (intptr_t)&withSound;
	params[2] = (intptr_t)onStartCallback;
	params[3] = (intptr_t)onCompleteCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::Reset(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType behaviorType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "Doozy.Engine.UI.UIButtonBehaviorType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&behaviorType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::InvokeCallbacks(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback)
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
Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::GetAnimationType(Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonAnimationType type)
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
float Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior::GetDefaultDisableInterval(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultDisableInterval", std::vector<std::string> { "Doozy.Engine.UI.UIButtonBehaviorType" });
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
