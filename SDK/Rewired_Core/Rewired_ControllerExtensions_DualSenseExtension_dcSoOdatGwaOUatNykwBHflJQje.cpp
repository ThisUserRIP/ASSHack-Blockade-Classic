#include "Rewired_ControllerExtensions_DualSenseExtension_dcSoOdatGwaOUatNykwBHflJQje.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerExtensions::DualSenseExtension_dcSoOdatGwaOUatNykwBHflJQje::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerExtensions::DualSenseExtension::GetIl2CppClass(), "dcSoOdatGwaOUatNykwBHflJQje");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerExtensions::DualSenseExtension_dcSoOdatGwaOUatNykwBHflJQje::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerExtensions::DualSenseExtension_dcSoOdatGwaOUatNykwBHflJQje::_ctor(Rewired_Core::Rewired::Drivers::Interfaces::IDriver_DualSense* driver, bool supportsVibration, int32_t vibrationMotorCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Drivers.Interfaces.IDriver_DualSense", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)driver;
	params[1] = (intptr_t)&supportsVibration;
	params[2] = (intptr_t)&vibrationMotorCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
