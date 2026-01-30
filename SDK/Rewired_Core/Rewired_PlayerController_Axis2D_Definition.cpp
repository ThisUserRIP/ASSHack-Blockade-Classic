#include "Rewired_PlayerController_Axis2D_Definition.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerController_Axis2D_Definition::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::PlayerController_Axis2D::GetIl2CppClass(), "Definition");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerController_Axis2D_Definition::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::PlayerController_Axis2D_Definition::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::PlayerController_Axis_Definition* Rewired_Core::Rewired::PlayerController_Axis2D_Definition::get_xAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_xAxis");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerController_Axis_Definition*)returnValue;
}
void Rewired_Core::Rewired::PlayerController_Axis2D_Definition::set_xAxis(Rewired_Core::Rewired::PlayerController_Axis_Definition* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_xAxis", std::vector<std::string> { "Rewired.PlayerController/Axis/Definition" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::PlayerController_Axis_Definition* Rewired_Core::Rewired::PlayerController_Axis2D_Definition::get_yAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_yAxis");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerController_Axis_Definition*)returnValue;
}
void Rewired_Core::Rewired::PlayerController_Axis2D_Definition::set_yAxis(Rewired_Core::Rewired::PlayerController_Axis_Definition* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_yAxis", std::vector<std::string> { "Rewired.PlayerController/Axis/Definition" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::PlayerController_Element* Rewired_Core::Rewired::PlayerController_Axis2D_Definition::CreateElement(Rewired_Core::Rewired::PlayerController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElement");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerController_Element*)returnValue;
}
