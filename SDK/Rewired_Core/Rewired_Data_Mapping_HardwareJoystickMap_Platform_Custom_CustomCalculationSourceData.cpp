#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_CustomCalculationSourceData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_CustomCalculationSourceData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom::GetIl2CppClass(), "CustomCalculationSourceData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_CustomCalculationSourceData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_CustomCalculationSourceData::DeepClone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeepClone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_CustomCalculationSourceData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
