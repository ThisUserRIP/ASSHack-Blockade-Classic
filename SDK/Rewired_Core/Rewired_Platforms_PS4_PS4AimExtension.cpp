#include "Rewired_Platforms_PS4_PS4AimExtension.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Platforms.PS4", "PS4AimExtension");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Platforms::PS4::IPS4AimExtensionSource* Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::get_Source()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Source");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Platforms::PS4::IPS4AimExtensionSource*)returnValue;
}
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::_ctor(Rewired_Core::Rewired::Platforms::PS4::IPS4AimExtensionSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Platforms.PS4.IPS4AimExtensionSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::_ctor(Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Platforms.PS4.PS4AimExtension" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::GetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVibration", std::vector<std::string> { "Rewired.Platforms.PS4.PS4AimMotorType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&motor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor, float motorLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.PS4.PS4AimMotorType", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&motorLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor, float motorLevel, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.PS4.PS4AimMotorType", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor, float motorLevel, float duration, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.PS4.PS4AimMotorType", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::SetVibration(float strongMotorLevel, float weakMotorLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&strongMotorLevel;
	params[1] = (intptr_t)&weakMotorLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::SetVibration(float strongMotorLevel, float weakMotorLevel, float strongMotorDuration, float weakMotorDuration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&strongMotorLevel;
	params[1] = (intptr_t)&weakMotorLevel;
	params[2] = (intptr_t)&strongMotorDuration;
	params[3] = (intptr_t)&weakMotorDuration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Controller_Extension* Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller_Extension*)returnValue;
}
int32_t Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension::nvtTmFsynmNJTZRapKATvOnbsmp(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nvtTmFsynmNJTZRapKATvOnbsmp");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
