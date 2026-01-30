#include "Facepunch_Steamworks_Server.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Server::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "Server");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Server::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facepunch_Steamworks::Facepunch::Steamworks::Server* Facepunch_Steamworks::Facepunch::Steamworks::Server::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::Facepunch::Steamworks::Server*)returnValue;
}
