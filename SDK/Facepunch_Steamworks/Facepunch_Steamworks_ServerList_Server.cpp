#include "Facepunch_Steamworks_ServerList_Server.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::ServerList_Server::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::Facepunch::Steamworks::ServerList::GetIl2CppClass(), "Server");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::ServerList_Server::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::Facepunch::Steamworks::ServerList_Server::OnServerRulesReceiveFinished(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* rules, bool Success)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnServerRulesReceiveFinished", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.String>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rules;
	params[1] = (intptr_t)&Success;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
