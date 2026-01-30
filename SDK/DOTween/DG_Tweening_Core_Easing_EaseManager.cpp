#include "DG_Tweening_Core_Easing_EaseManager.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::Easing::EaseManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core.Easing", "EaseManager");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::Easing::EaseManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float DOTween::DG::Tweening::Core::Easing::EaseManager::Evaluate(DOTween::DG::Tweening::Tween* t, float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Evaluate", std::vector<std::string> { "DG.Tweening.Tween", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&time;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&overshootOrAmplitude;
	params[4] = (intptr_t)&period;
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
float DOTween::DG::Tweening::Core::Easing::EaseManager::Evaluate(DOTween::DG::Tweening::Ease easeType, DOTween::DG::Tweening::EaseFunction* customEase, float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Evaluate", std::vector<std::string> { "DG.Tweening.Ease", "DG.Tweening.EaseFunction", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&easeType;
	params[1] = (intptr_t)customEase;
	params[2] = (intptr_t)&time;
	params[3] = (intptr_t)&duration;
	params[4] = (intptr_t)&overshootOrAmplitude;
	params[5] = (intptr_t)&period;
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
DOTween::DG::Tweening::EaseFunction* DOTween::DG::Tweening::Core::Easing::EaseManager::ToEaseFunction(DOTween::DG::Tweening::Ease ease)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToEaseFunction", std::vector<std::string> { "DG.Tweening.Ease" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ease;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::EaseFunction*)returnValue;
}
bool DOTween::DG::Tweening::Core::Easing::EaseManager::IsFlashEase(DOTween::DG::Tweening::Ease ease)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsFlashEase", std::vector<std::string> { "DG.Tweening.Ease" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ease;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
