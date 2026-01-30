#include "Rewired_HardwareJoystickMap_InputManager.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HardwareJoystickMap_InputManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "HardwareJoystickMap_InputManager");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HardwareJoystickMap_InputManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::HardwareJoystickMap_InputManager::GetAxisNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::HardwareJoystickMap_InputManager::GetEffectiveButtonNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEffectiveButtonNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
void Rewired_Core::Rewired::HardwareJoystickMap_InputManager::_ctor(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* hardwarePlatformMap, mscorlib::System::String* controllerName, int32_t buttonCount, int32_t axisCount, int32_t elementIdentifierCount, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.HardwareControllerMapIdentifier", "Rewired.JoystickType[]", "Rewired.Data.Mapping.HardwareJoystickMap/Platform", "System.String", "System.Int32", "System.Int32", "System.Int32", "Rewired.Data.Mapping.HardwareJoystickMap/CompoundElement[]" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&hardwareMapIdentifier;
	params[1] = (intptr_t)joystickTypes;
	params[2] = (intptr_t)hardwarePlatformMap;
	params[3] = (intptr_t)controllerName;
	params[4] = (intptr_t)&buttonCount;
	params[5] = (intptr_t)&axisCount;
	params[6] = (intptr_t)&elementIdentifierCount;
	params[7] = (intptr_t)compoundElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::HardwareControllerMap_Game* Rewired_Core::Rewired::HardwareJoystickMap_InputManager::ToGameHardwareControllerMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToGameHardwareControllerMap");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareControllerMap_Game*)returnValue;
}
