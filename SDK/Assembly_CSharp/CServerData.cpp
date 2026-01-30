#include "CServerData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::CServerData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "CServerData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::CServerData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::CServerData::_ctor(int32_t _type, int32_t _gamemode, int32_t _players, int32_t _maxplayers, mscorlib::System::String* _map, uint64_t _adminid, mscorlib::System::String* _ip, int32_t _port, int32_t _password, int32_t _country_id, int32_t _lvl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.String", "System.UInt64", "System.String", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&_type;
	params[1] = (intptr_t)&_gamemode;
	params[2] = (intptr_t)&_players;
	params[3] = (intptr_t)&_maxplayers;
	params[4] = (intptr_t)_map;
	params[5] = (intptr_t)&_adminid;
	params[6] = (intptr_t)_ip;
	params[7] = (intptr_t)&_port;
	params[8] = (intptr_t)&_password;
	params[9] = (intptr_t)&_country_id;
	params[10] = (intptr_t)&_lvl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::CServerData::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::CServerData::SetMapNameAndSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapNameAndSize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
