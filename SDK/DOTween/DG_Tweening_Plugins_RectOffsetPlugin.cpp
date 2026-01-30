#include "DG_Tweening_Plugins_RectOffsetPlugin.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::RectOffsetPlugin::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins", "RectOffsetPlugin");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::RectOffsetPlugin::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::Reset(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::RectOffset, UnityEngine_CoreModule::UnityEngine::RectOffset, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::RectOffset, UnityEngine_CoreModule::UnityEngine::RectOffset, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t, bool isRelative)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&isRelative;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::RectOffset, UnityEngine_CoreModule::UnityEngine::RectOffset, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t, UnityEngine_CoreModule::UnityEngine::RectOffset* fromValue, bool setImmediately)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>", "UnityEngine.RectOffset", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)fromValue;
	params[2] = (intptr_t)&setImmediately;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::RectOffset* DOTween::DG::Tweening::Plugins::RectOffsetPlugin::ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::RectOffset, UnityEngine_CoreModule::UnityEngine::RectOffset, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t, UnityEngine_CoreModule::UnityEngine::RectOffset* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToStartValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>", "UnityEngine.RectOffset" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RectOffset*)returnValue;
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::RectOffset, UnityEngine_CoreModule::UnityEngine::RectOffset, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRelativeEndValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::RectOffset, UnityEngine_CoreModule::UnityEngine::RectOffset, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChangeValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float DOTween::DG::Tweening::Plugins::RectOffsetPlugin::GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::NoOptions options, float unitsXSecond, UnityEngine_CoreModule::UnityEngine::RectOffset* changeValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpeedBasedDuration", std::vector<std::string> { "DG.Tweening.Plugins.Options.NoOptions", "System.Single", "UnityEngine.RectOffset" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&options;
	params[1] = (intptr_t)&unitsXSecond;
	params[2] = (intptr_t)changeValue;
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
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::NoOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::RectOffset>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::RectOffset>* setter, float elapsed, UnityEngine_CoreModule::UnityEngine::RectOffset* startValue, UnityEngine_CoreModule::UnityEngine::RectOffset* changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateAndApply", std::vector<std::string> { "DG.Tweening.Plugins.Options.NoOptions", "DG.Tweening.Tween", "System.Boolean", "DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>", "DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>", "System.Single", "UnityEngine.RectOffset", "UnityEngine.RectOffset", "System.Single", "System.Boolean", "DG.Tweening.Core.Enums.UpdateNotice" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&options;
	params[1] = (intptr_t)t;
	params[2] = (intptr_t)&isRelative;
	params[3] = (intptr_t)getter;
	params[4] = (intptr_t)setter;
	params[5] = (intptr_t)&elapsed;
	params[6] = (intptr_t)startValue;
	params[7] = (intptr_t)changeValue;
	params[8] = (intptr_t)&duration;
	params[9] = (intptr_t)&usingInversePosition;
	params[10] = (intptr_t)&updateNotice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::RectOffsetPlugin::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
