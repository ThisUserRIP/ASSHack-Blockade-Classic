#include "UnityEngine_Networking_Match_NetworkMatch.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking.Match", "NetworkMatch");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Uri* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::get_baseUri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_baseUri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::set_baseUri(System::System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_baseUri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::SetProgramAppID(UnityEngine_UNETModule::UnityEngine::Networking::Types::AppID programAppID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetProgramAppID", std::vector<std::string> { "UnityEngine.Networking.Types.AppID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&programAppID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::CreateMatch(mscorlib::System::String* matchName, uint32_t matchSize, bool matchAdvertise, mscorlib::System::String* matchPassword, mscorlib::System::String* publicClientAddress, mscorlib::System::String* privateClientAddress, int32_t eloScoreForMatch, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMatch", std::vector<std::string> { "System.String", "System.UInt32", "System.Boolean", "System.String", "System.String", "System.String", "System.Int32", "System.Int32", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)matchName;
	params[1] = (intptr_t)&matchSize;
	params[2] = (intptr_t)&matchAdvertise;
	params[3] = (intptr_t)matchPassword;
	params[4] = (intptr_t)publicClientAddress;
	params[5] = (intptr_t)privateClientAddress;
	params[6] = (intptr_t)&eloScoreForMatch;
	params[7] = (intptr_t)&requestDomain;
	params[8] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::CreateMatch(UnityEngine_UNETModule::UnityEngine::Networking::Match::CreateMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMatch", std::vector<std::string> { "UnityEngine.Networking.Match.CreateMatchRequest", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::OnMatchCreate(UnityEngine_UNETModule::UnityEngine::Networking::Match::CreateMatchResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* userCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMatchCreate", std::vector<std::string> { "UnityEngine.Networking.Match.CreateMatchResponse", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)response;
	params[1] = (intptr_t)userCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::JoinMatch(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, mscorlib::System::String* matchPassword, mscorlib::System::String* publicClientAddress, mscorlib::System::String* privateClientAddress, int32_t eloScoreForClient, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JoinMatch", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID", "System.String", "System.String", "System.String", "System.Int32", "System.Int32", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&netId;
	params[1] = (intptr_t)matchPassword;
	params[2] = (intptr_t)publicClientAddress;
	params[3] = (intptr_t)privateClientAddress;
	params[4] = (intptr_t)&eloScoreForClient;
	params[5] = (intptr_t)&requestDomain;
	params[6] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::JoinMatch(UnityEngine_UNETModule::UnityEngine::Networking::Match::JoinMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JoinMatch", std::vector<std::string> { "UnityEngine.Networking.Match.JoinMatchRequest", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::OnMatchJoined(UnityEngine_UNETModule::UnityEngine::Networking::Match::JoinMatchResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* userCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMatchJoined", std::vector<std::string> { "UnityEngine.Networking.Match.JoinMatchResponse", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)response;
	params[1] = (intptr_t)userCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::DestroyMatch(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyMatch", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID", "System.Int32", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&netId;
	params[1] = (intptr_t)&requestDomain;
	params[2] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::DestroyMatch(UnityEngine_UNETModule::UnityEngine::Networking::Match::DestroyMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyMatch", std::vector<std::string> { "UnityEngine.Networking.Match.DestroyMatchRequest", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::OnMatchDestroyed(UnityEngine_UNETModule::UnityEngine::Networking::Match::BasicResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* userCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMatchDestroyed", std::vector<std::string> { "UnityEngine.Networking.Match.BasicResponse", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)response;
	params[1] = (intptr_t)userCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::DropConnection(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID dropNodeId, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DropConnection", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.NodeID", "System.Int32", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&netId;
	params[1] = (intptr_t)&dropNodeId;
	params[2] = (intptr_t)&requestDomain;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::DropConnection(UnityEngine_UNETModule::UnityEngine::Networking::Match::DropConnectionRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DropConnection", std::vector<std::string> { "UnityEngine.Networking.Match.DropConnectionRequest", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::OnDropConnection(UnityEngine_UNETModule::UnityEngine::Networking::Match::DropConnectionResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* userCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDropConnection", std::vector<std::string> { "UnityEngine.Networking.Match.DropConnectionResponse", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)response;
	params[1] = (intptr_t)userCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::ListMatches(int32_t startPageNumber, int32_t resultPageSize, mscorlib::System::String* matchNameFilter, bool filterOutPrivateMatchesFromResults, int32_t eloScoreTarget, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ListMatches", std::vector<std::string> { "System.Int32", "System.Int32", "System.String", "System.Boolean", "System.Int32", "System.Int32", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&startPageNumber;
	params[1] = (intptr_t)&resultPageSize;
	params[2] = (intptr_t)matchNameFilter;
	params[3] = (intptr_t)&filterOutPrivateMatchesFromResults;
	params[4] = (intptr_t)&eloScoreTarget;
	params[5] = (intptr_t)&requestDomain;
	params[6] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::ListMatches(UnityEngine_UNETModule::UnityEngine::Networking::Match::ListMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ListMatches", std::vector<std::string> { "UnityEngine.Networking.Match.ListMatchRequest", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::OnMatchList(UnityEngine_UNETModule::UnityEngine::Networking::Match::ListMatchResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>>* userCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMatchList", std::vector<std::string> { "UnityEngine.Networking.Match.ListMatchResponse", "UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)response;
	params[1] = (intptr_t)userCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::SetMatchAttributes(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID networkId, bool isListed, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMatchAttributes", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID", "System.Boolean", "System.Int32", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&networkId;
	params[1] = (intptr_t)&isListed;
	params[2] = (intptr_t)&requestDomain;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::SetMatchAttributes(UnityEngine_UNETModule::UnityEngine::Networking::Match::SetMatchAttributesRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMatchAttributes", std::vector<std::string> { "UnityEngine.Networking.Match.SetMatchAttributesRequest", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::OnSetMatchAttributes(UnityEngine_UNETModule::UnityEngine::Networking::Match::BasicResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* userCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSetMatchAttributes", std::vector<std::string> { "UnityEngine.Networking.Match.BasicResponse", "UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)response;
	params[1] = (intptr_t)userCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
