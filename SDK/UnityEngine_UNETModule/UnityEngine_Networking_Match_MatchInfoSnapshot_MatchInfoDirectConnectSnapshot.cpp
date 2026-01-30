#include "UnityEngine_Networking_Match_MatchInfoSnapshot_MatchInfoDirectConnectSnapshot.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::GetIl2CppClass(), "MatchInfoDirectConnectSnapshot");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::set_nodeId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_nodeId", std::vector<std::string> { "UnityEngine.Networking.Types.NodeID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::set_publicAddress(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_publicAddress", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::set_privateAddress(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_privateAddress", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::set_hostPriority(UnityEngine_UNETModule::UnityEngine::Networking::Types::HostPriority value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hostPriority", std::vector<std::string> { "UnityEngine.Networking.Types.HostPriority" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot::_ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchDirectConnectInfo* matchDirectConnectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Networking.Match.MatchDirectConnectInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)matchDirectConnectInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
