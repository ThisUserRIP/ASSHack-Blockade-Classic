#include "DG_Tweening_ShortcutExtensions.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::ShortcutExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "ShortcutExtensions");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::ShortcutExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOAspect(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOAspect", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOColor(UnityEngine_CoreModule::UnityEngine::Camera* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Color", "System.Single" });
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
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFarClipPlane(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFarClipPlane", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFieldOfView(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFieldOfView", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DONearClipPlane(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DONearClipPlane", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOOrthoSize(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOOrthoSize", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOPixelRect(UnityEngine_CoreModule::UnityEngine::Camera* target, UnityEngine_CoreModule::UnityEngine::Rect endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPixelRect", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rect", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* DOTween::DG::Tweening::ShortcutExtensions::DORect(UnityEngine_CoreModule::UnityEngine::Camera* target, UnityEngine_CoreModule::UnityEngine::Rect endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORect", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rect", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakePosition(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakePosition", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakePosition(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakePosition", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakeRotation", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakeRotation", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOColor(UnityEngine_CoreModule::UnityEngine::Light* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Color", "System.Single" });
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
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOIntensity(UnityEngine_CoreModule::UnityEngine::Light* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOIntensity", std::vector<std::string> { "UnityEngine.Light", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOShadowStrength(UnityEngine_CoreModule::UnityEngine::Light* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShadowStrength", std::vector<std::string> { "UnityEngine.Light", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOColor(UnityEngine_CoreModule::UnityEngine::LineRenderer* target, DOTween::DG::Tweening::Color2 startValue, DOTween::DG::Tweening::Color2 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.LineRenderer", "DG.Tweening.Color2", "DG.Tweening.Color2", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&startValue;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Color", "System.Single" });
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
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Color", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Color", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFade(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFade", std::vector<std::string> { "UnityEngine.Material", "System.Single", "System.Single" });
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
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFade(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFade", std::vector<std::string> { "UnityEngine.Material", "System.Single", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFade(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFade", std::vector<std::string> { "UnityEngine.Material", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFloat(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFloat", std::vector<std::string> { "UnityEngine.Material", "System.Single", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOFloat(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFloat", std::vector<std::string> { "UnityEngine.Material", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOOffset(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOOffset", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector2", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOOffset(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOOffset", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector2", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOTiling(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTiling", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector2", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOTiling(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTiling", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector2", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOVector(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector4 endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOVector", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector4", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOVector(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector4 endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOVector", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Vector4", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOResize(UnityEngine_CoreModule::UnityEngine::TrailRenderer* target, float toStartWidth, float toEndWidth, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOResize", std::vector<std::string> { "UnityEngine.TrailRenderer", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&toStartWidth;
	params[2] = (intptr_t)&toEndWidth;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOTime(UnityEngine_CoreModule::UnityEngine::TrailRenderer* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTime", std::vector<std::string> { "UnityEngine.TrailRenderer", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOMove(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMove", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOMoveX(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveX", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOMoveY(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveY", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOMoveZ(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOMoveZ", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalMove(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalMove", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalMoveX(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalMoveX", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalMoveY(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalMoveY", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalMoveZ(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalMoveZ", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DOTween::DG::Tweening::ShortcutExtensions::DORotate(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, DOTween::DG::Tweening::RotateMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORotate", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "DG.Tweening.RotateMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOTween::DG::Tweening::ShortcutExtensions::DORotateQuaternion(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Quaternion endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORotateQuaternion", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion, DOTween::DG::Tweening::Plugins::Options::NoOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalRotate(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, DOTween::DG::Tweening::RotateMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalRotate", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "DG.Tweening.RotateMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalRotateQuaternion(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Quaternion endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalRotateQuaternion", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion, DOTween::DG::Tweening::Plugins::Options::NoOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOScale(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOScale", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOScale(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOScale", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOScaleX(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOScaleX", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOScaleY(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOScaleY", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOScaleZ(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOScaleZ", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOLookAt(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 towards, float duration, DOTween::DG::Tweening::AxisConstraint axisConstraint, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> up)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLookAt", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "DG.Tweening.AxisConstraint", "System.Nullable`1<UnityEngine.Vector3>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&towards;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&axisConstraint;
	params[4] = (intptr_t)&up;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOPunchPosition(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPunchPosition", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&punch;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&elasticity;
	params[5] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOPunchScale(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPunchScale", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&punch;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&elasticity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOPunchRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPunchRotation", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&punch;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&elasticity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakePosition(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, float strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakePosition", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&snapping;
	params[6] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakePosition(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakePosition", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&snapping;
	params[6] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakeRotation", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakeRotation", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakeScale(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakeScale", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOShakeScale(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOShakeScale", std::vector<std::string> { "UnityEngine.Transform", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&duration;
	params[2] = (intptr_t)&strength;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&randomness;
	params[5] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::ShortcutExtensions::DOJump(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOJump", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&jumpPower;
	params[3] = (intptr_t)&numJumps;
	params[4] = (intptr_t)&duration;
	params[5] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::ShortcutExtensions::DOLocalJump(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalJump", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&jumpPower;
	params[3] = (intptr_t)&numJumps;
	params[4] = (intptr_t)&duration;
	params[5] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOPath(UnityEngine_CoreModule::UnityEngine::Transform* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPath", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3[]", "System.Single", "DG.Tweening.PathType", "DG.Tweening.PathMode", "System.Int32", "System.Nullable`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathType;
	params[4] = (intptr_t)&pathMode;
	params[5] = (intptr_t)&resolution;
	params[6] = (intptr_t)&gizmoColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalPath(UnityEngine_CoreModule::UnityEngine::Transform* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalPath", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3[]", "System.Single", "DG.Tweening.PathType", "DG.Tweening.PathMode", "System.Int32", "System.Nullable`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathType;
	params[4] = (intptr_t)&pathMode;
	params[5] = (intptr_t)&resolution;
	params[6] = (intptr_t)&gizmoColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOPath(UnityEngine_CoreModule::UnityEngine::Transform* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPath", std::vector<std::string> { "UnityEngine.Transform", "DG.Tweening.Plugins.Core.PathCore.Path", "System.Single", "DG.Tweening.PathMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOLocalPath(UnityEngine_CoreModule::UnityEngine::Transform* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOLocalPath", std::vector<std::string> { "UnityEngine.Transform", "DG.Tweening.Plugins.Core.PathCore.Path", "System.Single", "DG.Tweening.PathMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)path;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&pathMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::ShortcutExtensions::DOTimeScale(DOTween::DG::Tweening::Tween* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTimeScale", std::vector<std::string> { "DG.Tweening.Tween", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Light* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableColor", std::vector<std::string> { "UnityEngine.Light", "UnityEngine.Color", "System.Single" });
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
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Color", "System.Single" });
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
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, mscorlib::System::String* property, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Color", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)property;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, int32_t propertyID, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableColor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Color", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&propertyID;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableMoveBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableMoveBy", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&byValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableLocalMoveBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, bool snapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableLocalMoveBy", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&byValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&snapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableRotateBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, DOTween::DG::Tweening::RotateMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableRotateBy", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "DG.Tweening.RotateMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&byValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableLocalRotateBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, DOTween::DG::Tweening::RotateMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableLocalRotateBy", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "DG.Tweening.RotateMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&byValue;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendablePunchRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendablePunchRotation", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&punch;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&vibrato;
	params[4] = (intptr_t)&elasticity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::ShortcutExtensions::DOBlendableScaleBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOBlendableScaleBy", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&byValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOComplete(UnityEngine_CoreModule::UnityEngine::Component* target, bool withCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOComplete", std::vector<std::string> { "UnityEngine.Component", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&withCallbacks;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOComplete(UnityEngine_CoreModule::UnityEngine::Material* target, bool withCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOComplete", std::vector<std::string> { "UnityEngine.Material", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&withCallbacks;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOKill(UnityEngine_CoreModule::UnityEngine::Component* target, bool complete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOKill", std::vector<std::string> { "UnityEngine.Component", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&complete;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOKill(UnityEngine_CoreModule::UnityEngine::Material* target, bool complete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOKill", std::vector<std::string> { "UnityEngine.Material", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&complete;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOFlip(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFlip", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOFlip(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFlip", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOGoto(UnityEngine_CoreModule::UnityEngine::Component* target, float to, bool andPlay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOGoto", std::vector<std::string> { "UnityEngine.Component", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&andPlay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOGoto(UnityEngine_CoreModule::UnityEngine::Material* target, float to, bool andPlay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOGoto", std::vector<std::string> { "UnityEngine.Material", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&andPlay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPause(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPause", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPause(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPause", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPlay(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlay", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPlay(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlay", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPlayBackwards(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlayBackwards", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPlayBackwards(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlayBackwards", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPlayForward(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlayForward", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOPlayForward(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlayForward", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DORestart(UnityEngine_CoreModule::UnityEngine::Component* target, bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORestart", std::vector<std::string> { "UnityEngine.Component", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&includeDelay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DORestart(UnityEngine_CoreModule::UnityEngine::Material* target, bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORestart", std::vector<std::string> { "UnityEngine.Material", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&includeDelay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DORewind(UnityEngine_CoreModule::UnityEngine::Component* target, bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORewind", std::vector<std::string> { "UnityEngine.Component", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&includeDelay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DORewind(UnityEngine_CoreModule::UnityEngine::Material* target, bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORewind", std::vector<std::string> { "UnityEngine.Material", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&includeDelay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOSmoothRewind(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOSmoothRewind", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOSmoothRewind(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOSmoothRewind", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOTogglePause(UnityEngine_CoreModule::UnityEngine::Component* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTogglePause", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::ShortcutExtensions::DOTogglePause(UnityEngine_CoreModule::UnityEngine::Material* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTogglePause", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
