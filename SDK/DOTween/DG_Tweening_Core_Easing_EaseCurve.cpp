#include "DG_Tweening_Core_Easing_EaseCurve.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::Easing::EaseCurve::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core.Easing", "EaseCurve");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::Easing::EaseCurve::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Core::Easing::EaseCurve::_ctor(UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animCurve;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float DOTween::DG::Tweening::Core::Easing::EaseCurve::Evaluate(float time, float duration, float unusedOvershoot, float unusedPeriod)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Evaluate", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&unusedOvershoot;
	params[3] = (intptr_t)&unusedPeriod;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
