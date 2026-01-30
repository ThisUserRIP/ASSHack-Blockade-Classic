#include "Rewired_InputManagers_CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputManagers::CustomInputManager::GetIl2CppClass(), "KFwgdyrAewbxRFhuVFIbddLITMtF");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_hardwareButtonCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hardwareButtonCount");
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
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_hardwareAxisCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hardwareAxisCount");
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
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_rewiredId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rewiredId");
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
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::set_rewiredId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rewiredId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_inputManagerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputManagerId");
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
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::set_inputManagerId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_inputManagerId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Nullable_1<mscorlib::System::Int64> Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_systemId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_systemId");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<mscorlib::System::Int64> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<mscorlib::System::Int64>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<mscorlib::System::Int64>>(*(mscorlib::System::Nullable_1<mscorlib::System::Int64>*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_unityId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unityId");
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
mscorlib::System::Guid Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_instanceGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instanceGuid");
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
mscorlib::System::Guid Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_persistentGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_persistentGuid");
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
Rewired_Core::Rewired::Controller_Extension* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::get_extension()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_extension");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller_Extension*)returnValue;
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::SetVibration(float amount, int32_t motorIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVibration", std::vector<std::string> { "System.Single", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&amount;
	params[1] = (intptr_t)&motorIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::StopVibration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopVibration");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::_ctor(Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* customInputSource, mscorlib::System::Nullable_1<mscorlib::System::Int64> systemJoystickId, int32_t unityJoystickId, Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick* joystick, Rewired_Core::Rewired::InputSource inputSource, Rewired_Core::Rewired::Controller_Extension* controllerExtension, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Platforms.Custom.CustomInputSource", "System.Nullable`1<System.Int64>", "System.Int32", "Rewired.Platforms.Custom.CustomInputSource/Joystick", "Rewired.InputSource", "Rewired.Controller/Extension", "System.Func`2<Rewired.BridgedControllerHWInfo,Rewired.HardwareJoystickMap_InputManager>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)customInputSource;
	params[1] = (intptr_t)&systemJoystickId;
	params[2] = (intptr_t)&unityJoystickId;
	params[3] = (intptr_t)joystick;
	params[4] = (intptr_t)&inputSource;
	params[5] = (intptr_t)controllerExtension;
	params[6] = (intptr_t)getHardwareJoystickMap_InputManager;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::cGrlKQnElSofnSJbLSyUPHcTTIN()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cGrlKQnElSofnSJbLSyUPHcTTIN");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::rWQapOtWfZhPThFVxOaoMWVCNCmi(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rWQapOtWfZhPThFVxOaoMWVCNCmi");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::JYTVndlQkGuiwdzuvuninSCEVDU(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JYTVndlQkGuiwdzuvuninSCEVDU");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::JYTVndlQkGuiwdzuvuninSCEVDU(Rewired_Core::Rewired::BridgedController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JYTVndlQkGuiwdzuvuninSCEVDU");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::FillData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillData", std::vector<std::string> { "Rewired.ControllerDataUpdater" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dataUpdater;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::BridgedControllerHWInfo* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::sRtWMqzxDvmWlQlEPfFCymsuePT()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "sRtWMqzxDvmWlQlEPfFCymsuePT");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::BridgedControllerHWInfo*)returnValue;
}
Rewired_Core::Rewired::BridgedController* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::ToBridgedController()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToBridgedController");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::BridgedController*)returnValue;
}
Rewired_Core::Rewired::ControllerDisconnectedEventArgs* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::ToControllerDisconnectedEventArgs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToControllerDisconnectedEventArgs");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerDisconnectedEventArgs*)returnValue;
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::fkzgbHJMBXqJwvpqfXcGmbnXuOM()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fkzgbHJMBXqJwvpqfXcGmbnXuOM");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::InBylEmicHyvZaFxBXrthYXUcON()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InBylEmicHyvZaFxBXrthYXUcON");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::LdrlFcRkCXUZlgLYOMJVGfbdqSS(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Button* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LdrlFcRkCXUZlgLYOMJVGfbdqSS");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
bool Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::cAnxGEJoxwVcNCGnVYZrDtMGvax(float A_1, float A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cAnxGEJoxwVcNCGnVYZrDtMGvax");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
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
float Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::dSixGVxBQofDdyaFgDxQjofPBQFk(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Axis* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dSixGVxBQofDdyaFgDxQjofPBQFk");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
float Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::dSixGVxBQofDdyaFgDxQjofPBQFk(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dSixGVxBQofDdyaFgDxQjofPBQFk");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
bool Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::LdrlFcRkCXUZlgLYOMJVGfbdqSS(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LdrlFcRkCXUZlgLYOMJVGfbdqSS");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::ileYApEGXZPtAKAVfetqXBCVjHd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ileYApEGXZPtAKAVfetqXBCVjHd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::SCfWkHXDxsVPtNmCThGKGqlbdKIU()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SCfWkHXDxsVPtNmCThGKGqlbdKIU");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::eLzfyozHEAEBXYmclHTMdaNcDSq()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "eLzfyozHEAEBXYmclHTMdaNcDSq");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::TUQDXSaXRrBEzUXdvYqvxDfORT(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_0, Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TUQDXSaXRrBEzUXdvYqvxDfORT");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)A_1;
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
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF::ipAgQDcgchgLNUPUvCtrZBOZmvd(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_0, Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ipAgQDcgchgLNUPUvCtrZBOZmvd");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)A_1;
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
