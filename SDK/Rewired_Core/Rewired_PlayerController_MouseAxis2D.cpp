#include "Rewired_PlayerController_MouseAxis2D.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerController_MouseAxis2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::PlayerController::GetIl2CppClass(), "MouseAxis2D");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerController_MouseAxis2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::PlayerController_MouseAxis2D::_ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_MouseAxis2D_Definition* definition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.PlayerController", "Rewired.PlayerController/MouseAxis2D/Definition" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)definition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::PlayerController_MouseAxis* Rewired_Core::Rewired::PlayerController_MouseAxis2D::get_xAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_xAxis");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerController_MouseAxis*)returnValue;
}
Rewired_Core::Rewired::PlayerController_MouseAxis* Rewired_Core::Rewired::PlayerController_MouseAxis2D::get_yAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_yAxis");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerController_MouseAxis*)returnValue;
}
