#include "Kongregate_KartridgeBindings.h"

IL2CPP::Il2CppClass* Kartridge::Kongregate::KartridgeBindings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Kartridge.dll", "Kongregate", "KartridgeBindings");
	return il2cppclass;
}
mscorlib::System::Type* Kartridge::Kongregate::KartridgeBindings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Kartridge::Kongregate::KartridgeBindings::InternalItemInstanceCallback(intptr_t context, uint32_t id, uint8_t success, Kartridge::Kongregate::ItemInstanceType& instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalItemInstanceCallback", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.Byte", "Kongregate.ItemInstanceType&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)&success;
	params[3] = (intptr_t)&instance;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Kartridge::Kongregate::KartridgeBindings::KongregateAPI_Initialize(mscorlib::System::String* settingsJson)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateAPI_Initialize", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)settingsJson;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Kartridge::Kongregate::KartridgeBindings::KongregateAPI_Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateAPI_Shutdown");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Kartridge::Kongregate::KartridgeBindings::KongregateAPI_Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateAPI_Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Kartridge::Kongregate::KartridgeBindings::KongregateAPI_IsConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateAPI_IsConnected");
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
void Kartridge::Kongregate::KartridgeBindings::KongregateAPI_SetEventCallback(Kartridge::Kongregate::KartridgeBindings_EventDelegate* listener)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateAPI_SetEventCallback", std::vector<std::string> { "Kongregate.KartridgeBindings/EventDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listener;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Kartridge::Kongregate::KartridgeBindings::KongregateAPI_SetEventCallback_Internal(Kartridge::Kongregate::KartridgeBindings_EventDelegate_Internal* listener, intptr_t context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateAPI_SetEventCallback_Internal", std::vector<std::string> { "Kongregate.KartridgeBindings/EventDelegate_Internal", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)listener;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Kartridge::Kongregate::KartridgeBindings::InternalEventCallback(intptr_t context, mscorlib::System::String* eventName, mscorlib::System::String* eventPayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalEventCallback", std::vector<std::string> { "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)eventName;
	params[2] = (intptr_t)eventPayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Kartridge::Kongregate::KartridgeBindings::KongregateServices_GetUsername()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateServices_GetUsername");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
intptr_t Kartridge::Kongregate::KartridgeBindings::KongregateServices_Internal_GetUsername()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateServices_Internal_GetUsername");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Kartridge::Kongregate::KartridgeBindings::KongregateServices_GetUserId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateServices_GetUserId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Kartridge::Kongregate::KartridgeBindings::KongregateServices_GetGameAuthToken()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateServices_GetGameAuthToken");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
intptr_t Kartridge::Kongregate::KartridgeBindings::KongregateServices_GetGameAuthTokenPtr()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateServices_GetGameAuthTokenPtr");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool Kartridge::Kongregate::KartridgeBindings::KongregateIAP_PurchaseDynamicItem(mscorlib::System::String* orderInfo, Kartridge::Kongregate::KartridgeBindings_ItemInstanceDelegate* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateIAP_PurchaseDynamicItem", std::vector<std::string> { "System.String", "Kongregate.KartridgeBindings/ItemInstanceDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)orderInfo;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
uint32_t Kartridge::Kongregate::KartridgeBindings::KongregateIAP_PurchaseDynamicItem_Internal(mscorlib::System::String* orderInfo, Kartridge::Kongregate::KartridgeBindings_ItemInstanceCallback* callback, intptr_t context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KongregateIAP_PurchaseDynamicItem_Internal", std::vector<std::string> { "System.String", "Kongregate.KartridgeBindings/ItemInstanceCallback", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)orderInfo;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Kartridge::Kongregate::KartridgeBindings::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
