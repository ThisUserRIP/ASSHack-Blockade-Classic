#include "DG_Tweening_Core_Easing_Flash.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::Easing::Flash::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core.Easing", "Flash");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::Easing::Flash::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float DOTween::DG::Tweening::Core::Easing::Flash::Ease(float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Ease", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&overshootOrAmplitude;
	params[3] = (intptr_t)&period;
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
float DOTween::DG::Tweening::Core::Easing::Flash::EaseIn(float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EaseIn", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&overshootOrAmplitude;
	params[3] = (intptr_t)&period;
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
float DOTween::DG::Tweening::Core::Easing::Flash::EaseOut(float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EaseOut", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&overshootOrAmplitude;
	params[3] = (intptr_t)&period;
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
float DOTween::DG::Tweening::Core::Easing::Flash::EaseInOut(float time, float duration, float overshootOrAmplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EaseInOut", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&overshootOrAmplitude;
	params[3] = (intptr_t)&period;
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
float DOTween::DG::Tweening::Core::Easing::Flash::WeightedEase(float overshootOrAmplitude, float period, int32_t stepIndex, float stepDuration, float dir, float res)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WeightedEase", std::vector<std::string> { "System.Single", "System.Single", "System.Int32", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&overshootOrAmplitude;
	params[1] = (intptr_t)&period;
	params[2] = (intptr_t)&stepIndex;
	params[3] = (intptr_t)&stepDuration;
	params[4] = (intptr_t)&dir;
	params[5] = (intptr_t)&res;
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
