#include "Facepunch_Steamworks_MicroTransactions.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "MicroTransactions");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::add_OnAuthorizationResponse(Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions_AuthorizationResponse* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnAuthorizationResponse", std::vector<std::string> { "Facepunch.Steamworks.MicroTransactions/AuthorizationResponse" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::remove_OnAuthorizationResponse(Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions_AuthorizationResponse* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnAuthorizationResponse", std::vector<std::string> { "Facepunch.Steamworks.MicroTransactions/AuthorizationResponse" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facepunch.Steamworks.Client" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)c;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::onMicroTxnAuthorizationResponse(Facepunch_Steamworks::SteamNative::MicroTxnAuthorizationResponse_t arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onMicroTxnAuthorizationResponse", std::vector<std::string> { "SteamNative.MicroTxnAuthorizationResponse_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
