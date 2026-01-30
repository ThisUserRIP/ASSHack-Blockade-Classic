#include "DG_Tweening_EaseFactory.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::EaseFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "EaseFactory");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::EaseFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::EaseFunction* DOTween::DG::Tweening::EaseFactory::StopMotion(int32_t motionFps, mscorlib::System::Nullable_1<DOTween::DG::Tweening::Ease> ease)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopMotion", std::vector<std::string> { "System.Int32", "System.Nullable`1<DG.Tweening.Ease>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motionFps;
	params[1] = (intptr_t)&ease;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::EaseFunction*)returnValue;
}
DOTween::DG::Tweening::EaseFunction* DOTween::DG::Tweening::EaseFactory::StopMotion(int32_t motionFps, UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopMotion", std::vector<std::string> { "System.Int32", "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motionFps;
	params[1] = (intptr_t)animCurve;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::EaseFunction*)returnValue;
}
DOTween::DG::Tweening::EaseFunction* DOTween::DG::Tweening::EaseFactory::StopMotion(int32_t motionFps, DOTween::DG::Tweening::EaseFunction* customEase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopMotion", std::vector<std::string> { "System.Int32", "DG.Tweening.EaseFunction" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motionFps;
	params[1] = (intptr_t)customEase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::EaseFunction*)returnValue;
}
void DOTween::DG::Tweening::EaseFactory::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
