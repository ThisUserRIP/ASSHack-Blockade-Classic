#include "Rewired_Platforms_XboxOne_IXboxOneInputSource.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Platforms.XboxOne", "IXboxOneInputSource");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource::GetXboxOneUserIdFromUnityJoystick(int32_t unityJoystickId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetXboxOneUserIdFromUnityJoystick", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unityJoystickId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource::SetXboxOneVibration(uint64_t xboxOneJoystickId, Rewired_Core::UTsiDltkMfrsEEHHJEydOZPBsEE vibration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetXboxOneVibration", std::vector<std::string> { "System.UInt64", "UTsiDltkMfrsEEHHJEydOZPBsEE" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&xboxOneJoystickId;
	params[1] = (intptr_t)&vibration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource::PulseVibrateMotor(uint64_t xboxOneJoystickId, Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float startLevel, float endLevel, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PulseVibrateMotor", std::vector<std::string> { "System.UInt64", "Rewired.Platforms.XboxOne.XboxOneGamepadMotorType", "System.Single", "System.Single", "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&xboxOneJoystickId;
	params[1] = (intptr_t)&motor;
	params[2] = (intptr_t)&startLevel;
	params[3] = (intptr_t)&endLevel;
	params[4] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
