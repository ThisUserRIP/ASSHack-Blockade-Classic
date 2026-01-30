#include "UnityEngine_ParticleSystem_VelocityOverLifetimeModule.h"

IL2CPP::Il2CppClass* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem::GetIl2CppClass(), "VelocityOverLifetimeModule");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::_ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.ParticleSystem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particleSystem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_x()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_x");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::set_x(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_x", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_y()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_y");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::set_y(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_y", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_z()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_z");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::set_z(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_z", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_enabled_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_x_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_x_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::set_x_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_x_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_y_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_y_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::set_y_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_y_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::get_z_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_z_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::set_z_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_z_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/VelocityOverLifetimeModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
