#include "Rewired_ComponentControls_Effects_RotateAroundAxis.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.ComponentControls.Effects", "RotateAroundAxis");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::get_speed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_speed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed>(*(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::set_speed(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_speed", std::vector<std::string> { "Rewired.ComponentControls.Effects.RotateAroundAxis/Speed" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::get_slowRotationSpeed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_slowRotationSpeed");
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
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::set_slowRotationSpeed(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_slowRotationSpeed", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::get_fastRotationSpeed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fastRotationSpeed");
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
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::set_fastRotationSpeed(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fastRotationSpeed", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::get_rotateAroundAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotateAroundAxis");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis>(*(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::set_rotateAroundAxis(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rotateAroundAxis", std::vector<std::string> { "Rewired.ComponentControls.Effects.RotateAroundAxis/RotationAxis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Space Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::get_relativeTo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_relativeTo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Space ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Space));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Space>(*(UnityEngine_CoreModule::UnityEngine::Space*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::set_relativeTo(UnityEngine_CoreModule::UnityEngine::Space value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_relativeTo", std::vector<std::string> { "UnityEngine.Space" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::get_reverse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_reverse");
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
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::set_reverse(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_reverse", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::MjAULDXXJmoltsQlxYxPjACBkhy(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MjAULDXXJmoltsQlxYxPjACBkhy");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::SetSpeed(Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed speed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSpeed", std::vector<std::string> { "Rewired.ComponentControls.Effects.RotateAroundAxis/Speed" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&speed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::SetSpeed(int32_t speed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSpeed", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&speed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Effects::RotateAroundAxis::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
