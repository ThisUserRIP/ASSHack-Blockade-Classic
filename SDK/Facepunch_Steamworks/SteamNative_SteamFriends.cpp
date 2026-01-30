#include "SteamNative_SteamFriends.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamFriends::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamFriends");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamFriends::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamFriends::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)steamworks;
	params[1] = (intptr_t)&pointer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::SteamFriends::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
uint64_t Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendByIndex", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&iFriend;
	params[1] = (intptr_t)&iFriendFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendCount(int32_t iFriendFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&iFriendFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendGamePlayed(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend, Facepunch_Steamworks::SteamNative::FriendGameInfo_t& pFriendGameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendGamePlayed", std::vector<std::string> { "SteamNative.CSteamID", "SteamNative.FriendGameInfo_t&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&steamIDFriend;
	params[1] = (intptr_t)&pFriendGameInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendMessage(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend, int32_t iMessageID, intptr_t pvData, int32_t cubData, Facepunch_Steamworks::SteamNative::ChatEntryType& peChatEntryType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendMessage", std::vector<std::string> { "SteamNative.CSteamID", "System.Int32", "System.IntPtr", "System.Int32", "SteamNative.ChatEntryType&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&steamIDFriend;
	params[1] = (intptr_t)&iMessageID;
	params[2] = (intptr_t)&pvData;
	params[3] = (intptr_t)&cubData;
	params[4] = (intptr_t)&peChatEntryType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendPersonaName(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendPersonaName", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Facepunch_Steamworks::SteamNative::PersonaState Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendPersonaState(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendPersonaState", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::PersonaState ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::PersonaState));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::PersonaState>(*(Facepunch_Steamworks::SteamNative::PersonaState*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::FriendRelationship Facepunch_Steamworks::SteamNative::SteamFriends::GetFriendRelationship(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriendRelationship", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::FriendRelationship ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::FriendRelationship));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::FriendRelationship>(*(Facepunch_Steamworks::SteamNative::FriendRelationship*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::SteamFriends::GetLargeFriendAvatar(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLargeFriendAvatar", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::SteamFriends::GetMediumFriendAvatar(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMediumFriendAvatar", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Facepunch_Steamworks::SteamNative::SteamFriends::GetPersonaName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPersonaName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Facepunch_Steamworks::SteamNative::SteamFriends::GetSmallFriendAvatar(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSmallFriendAvatar", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::SteamNative::SteamFriends::RequestFriendRichPresence(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestFriendRichPresence", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::SteamFriends::RequestUserInformation(Facepunch_Steamworks::SteamNative::CSteamID steamIDUser, bool bRequireNameOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestUserInformation", std::vector<std::string> { "SteamNative.CSteamID", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&steamIDUser;
	params[1] = (intptr_t)&bRequireNameOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
