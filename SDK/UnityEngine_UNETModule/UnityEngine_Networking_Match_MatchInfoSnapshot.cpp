#include "UnityEngine_Networking_Match_MatchInfoSnapshot.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking.Match", "MatchInfoSnapshot");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::get_networkId()
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
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_networkId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_networkId", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_hostNodeId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hostNodeId", std::vector<std::string> { "UnityEngine.Networking.Types.NodeID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_averageEloScore(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_averageEloScore", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_maxSize(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_maxSize", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_currentSize(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_currentSize", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_isPrivate(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isPrivate", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_matchAttributes(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_matchAttributes", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Int64>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot>* UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::get_directConnectInfos()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_directConnectInfos");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot>*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::set_directConnectInfos(mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_directConnectInfos", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot::_ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchDesc* matchDesc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Networking.Match.MatchDesc" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)matchDesc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
