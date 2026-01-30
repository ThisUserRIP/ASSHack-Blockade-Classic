#include "Rewired_Data_Mapping_HardwareJoystickMap_AxisCalibrationInfoEntry.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetIl2CppClass(), "AxisCalibrationInfoEntry");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry::_ctor(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry* original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap/AxisCalibrationInfoEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)original;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry::DeepClone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeepClone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry::ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportVars", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap/AxisCalibrationInfoEntry" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry::ToDictionary(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry*>* calibrations, bool deepClone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDictionary", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap/AxisCalibrationInfoEntry[]", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)calibrations;
	params[1] = (intptr_t)&deepClone;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>*)returnValue;
}
