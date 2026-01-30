#include "DG_Tweening_Plugins_RectPlugin.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::RectPlugin::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins", "RectPlugin");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::RectPlugin::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::RectPlugin::Reset(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectPlugin::SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* t, bool isRelative)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&isRelative;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectPlugin::SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* t, UnityEngine_CoreModule::UnityEngine::Rect fromValue, bool setImmediately)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>", "UnityEngine.Rect", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&fromValue;
	params[2] = (intptr_t)&setImmediately;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rect DOTween::DG::Tweening::Plugins::RectPlugin::ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* t, UnityEngine_CoreModule::UnityEngine::Rect value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToStartValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>", "UnityEngine.Rect" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::Plugins::RectPlugin::SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRelativeEndValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectPlugin::SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChangeValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float DOTween::DG::Tweening::Plugins::RectPlugin::GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::RectOptions options, float unitsXSecond, UnityEngine_CoreModule::UnityEngine::Rect changeValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpeedBasedDuration", std::vector<std::string> { "DG.Tweening.Plugins.Options.RectOptions", "System.Single", "UnityEngine.Rect" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&options;
	params[1] = (intptr_t)&unitsXSecond;
	params[2] = (intptr_t)&changeValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void DOTween::DG::Tweening::Plugins::RectPlugin::EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::RectOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Rect>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Rect>* setter, float elapsed, UnityEngine_CoreModule::UnityEngine::Rect startValue, UnityEngine_CoreModule::UnityEngine::Rect changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateAndApply", std::vector<std::string> { "DG.Tweening.Plugins.Options.RectOptions", "DG.Tweening.Tween", "System.Boolean", "DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>", "System.Single", "UnityEngine.Rect", "UnityEngine.Rect", "System.Single", "System.Boolean", "DG.Tweening.Core.Enums.UpdateNotice" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&options;
	params[1] = (intptr_t)t;
	params[2] = (intptr_t)&isRelative;
	params[3] = (intptr_t)getter;
	params[4] = (intptr_t)setter;
	params[5] = (intptr_t)&elapsed;
	params[6] = (intptr_t)&startValue;
	params[7] = (intptr_t)&changeValue;
	params[8] = (intptr_t)&duration;
	params[9] = (intptr_t)&usingInversePosition;
	params[10] = (intptr_t)&updateNotice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectPlugin::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
