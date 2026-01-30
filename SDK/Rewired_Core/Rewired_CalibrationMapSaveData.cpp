#include "Rewired_CalibrationMapSaveData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::CalibrationMapSaveData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "CalibrationMapSaveData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::CalibrationMapSaveData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::CalibrationMap* Rewired_Core::Rewired::CalibrationMapSaveData::get_map()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_map");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CalibrationMap*)returnValue;
}
Rewired_Core::Rewired::ControllerType Rewired_Core::Rewired::CalibrationMapSaveData::get_controllerType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::CalibrationMapSaveData::get_hardwareIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hardwareIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::CalibrationMapSaveData::_ctor(Rewired_Core::Rewired::CalibrationMap* calibrationMap, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* hardwareIdentifier)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.CalibrationMap", "Rewired.ControllerType", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)calibrationMap;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)hardwareIdentifier;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
