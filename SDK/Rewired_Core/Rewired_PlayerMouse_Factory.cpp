#include "Rewired_PlayerMouse_Factory.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerMouse_Factory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::PlayerMouse::GetIl2CppClass(), "Factory");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerMouse_Factory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::PlayerMouse* Rewired_Core::Rewired::PlayerMouse_Factory::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerMouse*)returnValue;
}
Rewired_Core::Rewired::PlayerMouse* Rewired_Core::Rewired::PlayerMouse_Factory::zTufJcQfUjAbtihMoqeFKhxXYGv(int32_t A_0, int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zTufJcQfUjAbtihMoqeFKhxXYGv");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerMouse*)returnValue;
}
Rewired_Core::Rewired::PlayerMouse* Rewired_Core::Rewired::PlayerMouse_Factory::Create(Rewired_Core::Rewired::PlayerMouse_Definition* definition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "Rewired.PlayerMouse/Definition" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)definition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlayerMouse*)returnValue;
}
