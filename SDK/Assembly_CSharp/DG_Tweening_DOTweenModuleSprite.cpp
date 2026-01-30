#include "DG_Tweening_DOTweenModuleSprite.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModuleSprite::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenModuleSprite");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModuleSprite::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleSprite::DOColor(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.SpriteRenderer", "UnityEngine.Color", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleSprite::DOFade(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFade", std::vector<std::string> { "UnityEngine.SpriteRenderer", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Sequence* Assembly_CSharp::DG::Tweening::DOTweenModuleSprite::DOGradientColor(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOGradientColor", std::vector<std::string> { "UnityEngine.SpriteRenderer", "UnityEngine.Gradient", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)gradient;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Tweener* Assembly_CSharp::DG::Tweening::DOTweenModuleSprite::DOBlendableColor(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableColor", std::vector<std::string> { "UnityEngine.SpriteRenderer", "UnityEngine.Color", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
