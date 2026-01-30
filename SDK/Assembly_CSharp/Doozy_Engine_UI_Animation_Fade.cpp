#include "Doozy_Engine_UI_Animation_Fade.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Animation", "Fade");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::get_TotalDuration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TotalDuration");
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
void Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::_ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&animationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::_ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, bool enabled, float from, float to, float by, bool useCustomFromAndTo, int32_t numberOfLoops, DOTween::DG::Tweening::LoopType loopType, Assembly_CSharp::Doozy::Engine::UI::Animation::EaseType easeType, DOTween::DG::Tweening::Ease ease, UnityEngine_CoreModule::UnityEngine::AnimationCurve* animationCurve, float startDelay, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType", "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Int32", "DG.Tweening.LoopType", "Doozy.Engine.UI.Animation.EaseType", "DG.Tweening.Ease", "UnityEngine.AnimationCurve", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[13];
	params[0] = (intptr_t)&animationType;
	params[1] = (intptr_t)&enabled;
	params[2] = (intptr_t)&from;
	params[3] = (intptr_t)&to;
	params[4] = (intptr_t)&by;
	params[5] = (intptr_t)&useCustomFromAndTo;
	params[6] = (intptr_t)&numberOfLoops;
	params[7] = (intptr_t)&loopType;
	params[8] = (intptr_t)&easeType;
	params[9] = (intptr_t)&ease;
	params[10] = (intptr_t)animationCurve;
	params[11] = (intptr_t)&startDelay;
	params[12] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::Reset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&animationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* Assembly_CSharp::Doozy::Engine::UI::Animation::Fade::Copy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::Fade*)returnValue;
}
