#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput::GetIl2CppClass(), "Button_Base");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base::ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportVars", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap/Platform_RawOrDirectInput/Button_Base" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
