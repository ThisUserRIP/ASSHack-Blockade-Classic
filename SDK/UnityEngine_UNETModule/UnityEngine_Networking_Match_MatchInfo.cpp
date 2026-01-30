#include "UnityEngine_Networking_Match_MatchInfo.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking.Match", "MatchInfo");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::get_address()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_address");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_address(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_address", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::get_port()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_port");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_port(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_port", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::get_domain()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_domain");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_domain(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_domain", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::get_networkId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_networkId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID>(*(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_networkId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_networkId", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_accessToken(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_accessToken", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkAccessToken" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::get_nodeId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_nodeId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID>(*(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_nodeId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_nodeId", std::vector<std::string> { "UnityEngine.Networking.Types.NodeID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::get_usingRelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_usingRelay");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::set_usingRelay(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_usingRelay", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::_ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::CreateMatchResponse* matchResponse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Networking.Match.CreateMatchResponse" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)matchResponse;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::_ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::JoinMatchResponse* matchResponse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Networking.Match.JoinMatchResponse" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)matchResponse;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
