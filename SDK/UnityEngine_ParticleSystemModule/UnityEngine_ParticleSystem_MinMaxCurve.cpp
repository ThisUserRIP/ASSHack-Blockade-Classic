#include "UnityEngine_ParticleSystem_MinMaxCurve.h"

IL2CPP::Il2CppClass* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem::GetIl2CppClass(), "MinMaxCurve");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_mode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_mode(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_mode", std::vector<std::string> { "UnityEngine.ParticleSystemCurveMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_curveMultiplier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_curveMultiplier");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_curveMultiplier(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_curveMultiplier", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_curveMax()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_curveMax");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_curveMax(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_curveMax", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_curveMin()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_curveMin");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_curveMin(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_curveMin", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_constantMax()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_constantMax");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_constantMax(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_constantMax", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_constantMin()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_constantMin");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_constantMin(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_constantMin", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_constant()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_constant");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_constant(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_constant", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::get_curve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_curve");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve::set_curve(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_curve", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
