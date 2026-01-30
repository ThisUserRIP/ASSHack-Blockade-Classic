#include "Rewired_PlayerController_Factory.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerController_Factory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::PlayerController::GetIl2CppClass(), "Factory");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerController_Factory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::PlayerController* Rewired_Core::Rewired::PlayerController_Factory::Create(Rewired_Core::Rewired::PlayerController_Definition* definition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "Rewired.PlayerController/Definition" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)definition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerController*)returnValue;
}
