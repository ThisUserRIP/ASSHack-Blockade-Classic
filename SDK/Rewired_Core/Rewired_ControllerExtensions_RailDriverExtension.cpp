#include "Rewired_ControllerExtensions_RailDriverExtension.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.ControllerExtensions", "RailDriverExtension");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Joystick* Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::get_joystick()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystick");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Joystick*)returnValue;
}
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::_ctor(Rewired_Core::Rewired::Drivers::Interfaces::IDriver_RailDriver* driver)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Drivers.Interfaces.IDriver_RailDriver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)driver;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::_ctor(Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerExtensions.RailDriverExtension" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::get_speakerEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_speakerEnabled");
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
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::set_speakerEnabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_speakerEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::SetLEDDisplay(int32_t digitIndex, uint8_t digitBitValues)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLEDDisplay", std::vector<std::string> { "System.Int32", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&digitIndex;
	params[1] = (intptr_t)&digitBitValues;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::SetLEDDisplay(uint8_t digit1BitValues, uint8_t digit2BitValues, uint8_t digit3BitValues)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLEDDisplay", std::vector<std::string> { "System.Byte", "System.Byte", "System.Byte" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&digit1BitValues;
	params[1] = (intptr_t)&digit2BitValues;
	params[2] = (intptr_t)&digit3BitValues;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SourceUpdated");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Controller_Extension* Rewired_Core::Rewired::ControllerExtensions::RailDriverExtension::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller_Extension*)returnValue;
}
