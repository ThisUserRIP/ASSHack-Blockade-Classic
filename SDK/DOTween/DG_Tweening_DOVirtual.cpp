#include "DG_Tweening_DOVirtual.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::DOVirtual::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "DOVirtual");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::DOVirtual::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::DOVirtual::Float(float from, float to, float duration, DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Single>* onVirtualUpdate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Float", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "DG.Tweening.TweenCallback`1<System.Single>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)onVirtualUpdate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
float DOTween::DG::Tweening::DOVirtual::EasedValue(float from, float to, float lifetimePercentage, DOTween::DG::Tweening::Ease easeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EasedValue", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "DG.Tweening.Ease" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&lifetimePercentage;
	params[3] = (intptr_t)&easeType;
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
float DOTween::DG::Tweening::DOVirtual::EasedValue(float from, float to, float lifetimePercentage, DOTween::DG::Tweening::Ease easeType, float overshoot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EasedValue", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "DG.Tweening.Ease", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&lifetimePercentage;
	params[3] = (intptr_t)&easeType;
	params[4] = (intptr_t)&overshoot;
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
float DOTween::DG::Tweening::DOVirtual::EasedValue(float from, float to, float lifetimePercentage, DOTween::DG::Tweening::Ease easeType, float amplitude, float period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EasedValue", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "DG.Tweening.Ease", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&lifetimePercentage;
	params[3] = (intptr_t)&easeType;
	params[4] = (intptr_t)&amplitude;
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
float DOTween::DG::Tweening::DOVirtual::EasedValue(float from, float to, float lifetimePercentage, UnityEngine_CoreModule::UnityEngine::AnimationCurve* easeCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EasedValue", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&lifetimePercentage;
	params[3] = (intptr_t)easeCurve;
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
DOTween::DG::Tweening::Tween* DOTween::DG::Tweening::DOVirtual::DelayedCall(float delay, DOTween::DG::Tweening::TweenCallback* callback, bool ignoreTimeScale)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DelayedCall", std::vector<std::string> { "System.Single", "DG.Tweening.TweenCallback", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&ignoreTimeScale;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tween*)returnValue;
}
