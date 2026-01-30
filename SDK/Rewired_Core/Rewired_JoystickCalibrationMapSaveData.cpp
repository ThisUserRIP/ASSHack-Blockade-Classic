#include "Rewired_JoystickCalibrationMapSaveData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::JoystickCalibrationMapSaveData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "JoystickCalibrationMapSaveData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::JoystickCalibrationMapSaveData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Guid Rewired_Core::Rewired::JoystickCalibrationMapSaveData::get_joystickHardwareTypeGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystickHardwareTypeGuid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::JoystickCalibrationMapSaveData::_ctor(Rewired_Core::Rewired::CalibrationMap* calibrationMap, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* hardwareIdentifier, mscorlib::System::Guid joystickHardwareTypeGuid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.CalibrationMap", "Rewired.ControllerType", "System.String", "System.Guid" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)calibrationMap;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)hardwareIdentifier;
	params[3] = (intptr_t)&joystickHardwareTypeGuid;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
