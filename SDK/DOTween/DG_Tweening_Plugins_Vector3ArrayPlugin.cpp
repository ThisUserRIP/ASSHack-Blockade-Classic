#include "DG_Tweening_Plugins_Vector3ArrayPlugin.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Plugins", "Vector3ArrayPlugin");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::Reset(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, bool isRelative)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&isRelative;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* fromValue, bool setImmediately)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFrom", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>", "UnityEngine.Vector3[]", "System.Boolean" });
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
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToStartValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>", "UnityEngine.Vector3" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>*)returnValue;
}
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRelativeEndValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChangeValue", std::vector<std::string> { "DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions options, float unitsXSecond, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* changeValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpeedBasedDuration", std::vector<std::string> { "DG.Tweening.Plugins.Options.Vector3ArrayOptions", "System.Single", "UnityEngine.Vector3[]" });
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
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float elapsed, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* startValue, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateAndApply", std::vector<std::string> { "DG.Tweening.Plugins.Options.Vector3ArrayOptions", "DG.Tweening.Tween", "System.Boolean", "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "System.Single", "UnityEngine.Vector3[]", "UnityEngine.Vector3[]", "System.Single", "System.Boolean", "DG.Tweening.Core.Enums.UpdateNotice" });
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
void DOTween::DG::Tweening::Plugins::Vector3ArrayPlugin::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
