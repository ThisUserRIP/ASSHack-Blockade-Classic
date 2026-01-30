#include "Rewired_Joystick.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Joystick::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "Joystick");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Joystick::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::JoystickType>* Rewired_Core::Rewired::Joystick::get_joystickTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystickTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::JoystickType>*)returnValue;
}
mscorlib::System::Nullable_1<mscorlib::System::Int64> Rewired_Core::Rewired::Joystick::get_systemId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_systemId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<mscorlib::System::Int64> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<mscorlib::System::Int64>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<mscorlib::System::Int64>>(*(mscorlib::System::Nullable_1<mscorlib::System::Int64>*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Joystick::get_unityId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unityId");
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
mscorlib::System::Guid Rewired_Core::Rewired::Joystick::get_deviceInstanceGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_deviceInstanceGuid");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Joystick::get_supportsVibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportsVibration");
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
float Rewired_Core::Rewired::Joystick::get_vibrationLeftMotor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vibrationLeftMotor");
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
void Rewired_Core::Rewired::Joystick::set_vibrationLeftMotor(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_vibrationLeftMotor", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Joystick::get_vibrationRightMotor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vibrationRightMotor");
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
void Rewired_Core::Rewired::Joystick::set_vibrationRightMotor(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_vibrationRightMotor", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Joystick::get_vibrationMotorCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vibrationMotorCount");
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
int32_t Rewired_Core::Rewired::Joystick::get_hatCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hatCount");
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Hat>* Rewired_Core::Rewired::Joystick::get_Hats()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Hats");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Hat>*)returnValue;
}
int32_t Rewired_Core::Rewired::Joystick::get_inputManagerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputManagerId");
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
Rewired_Core::Rewired::HardwareControllerMapIdentifier Rewired_Core::Rewired::Joystick::get_hardwareJoystickMapIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hardwareJoystickMapIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::HardwareControllerMapIdentifier ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::HardwareControllerMapIdentifier));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::HardwareControllerMapIdentifier>(*(Rewired_Core::Rewired::HardwareControllerMapIdentifier*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Joystick::_ctor(Rewired_Core::Rewired::BridgedController* controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.BridgedController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::_ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, mscorlib::System::Guid hardwareTypeGuid, int32_t axisCount, int32_t buttonCount, IL2CPP::Array<bool>* isButtonPressureSensitive, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.InputSource", "System.String", "System.String", "System.String", "System.Guid", "System.Int32", "System.Int32", "System.Boolean[]", "Rewired.HardwareControllerMap_Game", "Rewired.Controller/Extension", "Rewired.ControllerDataUpdater" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&controllerId;
	params[1] = (intptr_t)&inputSource;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)hardwareName;
	params[4] = (intptr_t)hardwareIdentifier;
	params[5] = (intptr_t)&hardwareTypeGuid;
	params[6] = (intptr_t)&axisCount;
	params[7] = (intptr_t)&buttonCount;
	params[8] = (intptr_t)isButtonPressureSensitive;
	params[9] = (intptr_t)hardwareMap;
	params[10] = (intptr_t)extension;
	params[11] = (intptr_t)dataUpdater;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Joystick::IsType(Rewired_Core::Rewired::JoystickType joystickType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsType", std::vector<std::string> { "Rewired.JoystickType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&joystickType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::JoystickCalibrationMapSaveData* Rewired_Core::Rewired::Joystick::GetCalibrationMapSaveData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCalibrationMapSaveData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickCalibrationMapSaveData*)returnValue;
}
void Rewired_Core::Rewired::Joystick::SetVibration(float leftMotorLevel, float rightMotorLevel)
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
void Rewired_Core::Rewired::Joystick::SetVibration(float leftMotorLevel, float rightMotorLevel, float leftMotorDuration, float rightMotorDuration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&leftMotorLevel;
	params[1] = (intptr_t)&rightMotorLevel;
	params[2] = (intptr_t)&leftMotorDuration;
	params[3] = (intptr_t)&rightMotorDuration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::SetVibration(int32_t motorIndex, float motorLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::SetVibration(int32_t motorIndex, float motorLevel, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&stopOtherMotors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::Joystick::GetVibration(int32_t motorIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVibration", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&motorIndex;
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
void Rewired_Core::Rewired::Joystick::StopVibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopVibration");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData", std::vector<std::string> { "Rewired.UpdateLoopType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::UpdateControllerInfo(Rewired_Core::Rewired::UpdateControllerInfoEventArgs* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateControllerInfo", std::vector<std::string> { "Rewired.UpdateControllerInfoEventArgs" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::UpdateControllerInfo(Rewired_Core::Rewired::BridgedController* controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateControllerInfo", std::vector<std::string> { "Rewired.BridgedController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::UpdateControllerInfo(Rewired_Core::Rewired::Interfaces::IInputManagerJoystickPublic* joystick)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateControllerInfo", std::vector<std::string> { "Rewired.Interfaces.IInputManagerJoystickPublic" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)joystick;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::Disconnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::CheckVibrationTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckVibrationTimeout");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::SetLocalVibration(int32_t motorIndex, float motorLevel, float motorDuration, bool stopOtherMotors, bool updateNow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLocalVibration", std::vector<std::string> { "System.Int32", "System.Single", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&motorIndex;
	params[1] = (intptr_t)&motorLevel;
	params[2] = (intptr_t)&motorDuration;
	params[3] = (intptr_t)&stopOtherMotors;
	params[4] = (intptr_t)&updateNow;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::UpdateLocalControllerVibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateLocalControllerVibration");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Joystick::StopAllVibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopAllVibration");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Joystick::CompareById_Ascending(Rewired_Core::Rewired::Joystick* a, Rewired_Core::Rewired::Joystick* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareById_Ascending", std::vector<std::string> { "Rewired.Joystick", "Rewired.Joystick" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
