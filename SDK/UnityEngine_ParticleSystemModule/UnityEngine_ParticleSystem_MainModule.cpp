#include "UnityEngine_ParticleSystem_MainModule.h"

IL2CPP::Il2CppClass* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem::GetIl2CppClass(), "MainModule");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::_ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particleSystem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.ParticleSystem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)particleSystem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_duration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_duration");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_duration(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_duration", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_loop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_loop");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_loop(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_loop", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_prewarm()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_prewarm");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_prewarm(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_prewarm", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startDelay");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startDelay(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startDelay", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startLifetime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startLifetime");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startLifetime(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startLifetime", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSpeed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSpeed");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSpeed(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSpeed", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSize3D()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSize3D");
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
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSize");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSize(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSize", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeMultiplier(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeMultiplier", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSizeX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSizeX");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeX(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeX", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSizeY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSizeY");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeY(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeY", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSizeZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSizeZ");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeZ(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeZ", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startColor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startColor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startColor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startColor", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxGradient" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_simulationSpeed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_simulationSpeed");
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_simulationSpeed(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_simulationSpeed", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_duration_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_duration_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_duration_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_duration_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_loop_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_loop_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&" });
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_loop_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_loop_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_prewarm_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_prewarm_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&" });
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_prewarm_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_prewarm_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startDelay_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startDelay_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startDelay_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startDelay_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startLifetime_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startLifetime_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startLifetime_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startLifetime_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSpeed_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSpeed_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSize3D_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSize3D_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&" });
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSize_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSize_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSize_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSize_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeMultiplier_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeMultiplier_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSizeX_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSizeX_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeX_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeX_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSizeY_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSizeY_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeY_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeY_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startSizeZ_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startSizeZ_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startSizeZ_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startSizeZ_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxCurve&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_startColor_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_startColor_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxGradient&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_startColor_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_startColor_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "UnityEngine.ParticleSystem/MinMaxGradient&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::get_simulationSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_simulationSpeed_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule::set_simulationSpeed_Injected(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule& _unity_self, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_simulationSpeed_Injected", std::vector<std::string> { "UnityEngine.ParticleSystem/MainModule&", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
