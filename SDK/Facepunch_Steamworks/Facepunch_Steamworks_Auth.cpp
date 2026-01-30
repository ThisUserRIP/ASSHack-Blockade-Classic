#include "Facepunch_Steamworks_Auth.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Auth::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "Auth");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Auth::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facepunch_Steamworks::Facepunch::Steamworks::Auth_Ticket* Facepunch_Steamworks::Facepunch::Steamworks::Auth::GetAuthSessionTicket()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAuthSessionTicket");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::Facepunch::Steamworks::Auth_Ticket*)returnValue;
}
void Facepunch_Steamworks::Facepunch::Steamworks::Auth::AuthResponse(Facepunch_Steamworks::SteamNative::GetAuthSessionTicketResponse_t t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AuthResponse", std::vector<std::string> { "SteamNative.GetAuthSessionTicketResponse_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Auth::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
