#include "Rewired_Platforms_XboxOne_XboxOneGamepadExtension.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Platforms.XboxOne", "XboxOneGamepadExtension");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Joystick* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::get_joystick()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystick");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Joystick*)returnValue;
}
int32_t Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::get_xboxOneUserId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_xboxOneUserId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::get_xboxOneJoystickId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_xboxOneJoystickId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::_ctor(bool supportsVibration, Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* xboxOneInputSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "Rewired.Platforms.XboxOne.IXboxOneInputSource" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&supportsVibration;
	params[1] = (intptr_t)xboxOneInputSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::_ctor(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadExtension" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::get_vibrationMotorCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vibrationMotorCount");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(int32_t motorIndex, float motorLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(int32_t motorIndex, float motorLevel, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Single", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::GetVibration(int32_t motorIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVibration", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&motorIndex;
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
float Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::GetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVibration", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType" });
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
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::StopVibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopVibration");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&motorLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel, float duration, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType", "System.Single", "System.Single", "System.Boolean" });
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
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(float leftMotorLevel, float rightMotorLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&leftMotorLevel;
	params[1] = (intptr_t)&rightMotorLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(float leftMotorLevel, float rightMotorLevel, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&leftMotorLevel;
	params[1] = (intptr_t)&rightMotorLevel;
	params[2] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SetVibration(float leftMotorLevel, float rightMotorLevel, float leftTriggerLevel, float rightTriggerLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&leftMotorLevel;
	params[1] = (intptr_t)&rightMotorLevel;
	params[2] = (intptr_t)&leftTriggerLevel;
	params[3] = (intptr_t)&rightTriggerLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::PulseVibrateMotor(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float startLevel, float endLevel, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PulseVibrateMotor", std::vector<std::string> { "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&motor;
	params[1] = (intptr_t)&startLevel;
	params[2] = (intptr_t)&endLevel;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SourceUpdated");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Controller_Extension* Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller_Extension*)returnValue;
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::PtePNmFpEGLSJmOzRgMhZNHcfvd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PtePNmFpEGLSJmOzRgMhZNHcfvd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::wMUtYLYdZFUorvTsKRTcgmzZzme(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType A_1, float A_2, float A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wMUtYLYdZFUorvTsKRTcgmzZzme");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension::qazZPpsoQfFdUIVtgKGkWyfIuefu()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qazZPpsoQfFdUIVtgKGkWyfIuefu");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
