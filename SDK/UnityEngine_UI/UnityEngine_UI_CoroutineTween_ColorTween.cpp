#include "UnityEngine_UI_CoroutineTween_ColorTween.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI.CoroutineTween", "ColorTween");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::get_startColor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startColor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::set_startColor(UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startColor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_targetColor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor(UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_targetColor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_tweenMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode>(*(UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode(UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_tweenMode", std::vector<std::string> { "UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::get_duration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_duration");
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
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::set_duration(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_duration", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ignoreTimeScale");
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
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ignoreTimeScale", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::TweenValue(float floatPercentage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TweenValue", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&floatPercentage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Color>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOnChangedCallback", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIgnoreTimescale");
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
float UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::GetDuration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDuration");
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
bool UnityEngine_UI::UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidTarget");
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
