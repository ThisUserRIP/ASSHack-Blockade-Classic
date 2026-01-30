#include "KartridgeHandler.h"

IL2CPP::Il2CppClass* Assembly_CSharp::KartridgeHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "KartridgeHandler");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::KartridgeHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::KartridgeHandler::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::KartridgeHandler::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::KartridgeHandler::onCallback(mscorlib::System::String* _event, mscorlib::System::String* _evp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onCallback", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)_event;
	params[1] = (intptr_t)_evp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::BuyItem(int32_t ItemID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuyItem", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ItemID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::OnBuyItem(bool status, Kartridge::Kongregate::KartridgeBindings_ItemInstance* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBuyItem", std::vector<std::string> { "System.Boolean", "Kongregate.KartridgeBindings/ItemInstance" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&status;
	params[1] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::KartridgeHandler::CheckInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckInit");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::KartridgeHandler::GetUserName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUserName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::KartridgeHandler::GetUser()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUser");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::GetAuthTicket()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAuthTicket");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::GetUserAvatar(uint64_t _steamID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUserAvatar", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_steamID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::KartridgeHandler::GetFriends()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFriends");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::KartridgeHandler::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::CloseConnection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseConnection");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::KartridgeHandler::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
