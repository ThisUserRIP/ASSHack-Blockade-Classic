#include "SteamNative_SteamInventory.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamInventory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamInventory");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamInventory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamInventory::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
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
void Facepunch_Steamworks::SteamNative::SteamInventory::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::SteamInventory::DestroyResult(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyResult", std::vector<std::string> { "SteamNative.SteamInventoryResult_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::SteamInventory::GetAllItems(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t& pResultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllItems", std::vector<std::string> { "SteamNative.SteamInventoryResult_t&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pResultHandle;
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
IL2CPP::Array<Facepunch_Steamworks::SteamNative::SteamItemDef_t>* Facepunch_Steamworks::SteamNative::SteamInventory::GetItemDefinitionIDs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetItemDefinitionIDs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Facepunch_Steamworks::SteamNative::SteamItemDef_t>*)returnValue;
}
bool Facepunch_Steamworks::SteamNative::SteamInventory::GetItemDefinitionProperty(Facepunch_Steamworks::SteamNative::SteamItemDef_t iDefinition, mscorlib::System::String* pchPropertyName, mscorlib::System::String& pchValueBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetItemDefinitionProperty", std::vector<std::string> { "SteamNative.SteamItemDef_t", "System.String", "System.String&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&iDefinition;
	params[1] = (intptr_t)pchPropertyName;
	params[2] = (intptr_t)&pchValueBuffer;
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
bool Facepunch_Steamworks::SteamNative::SteamInventory::GetItemPrice(Facepunch_Steamworks::SteamNative::SteamItemDef_t iDefinition, uint64_t& pPrice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetItemPrice", std::vector<std::string> { "SteamNative.SteamItemDef_t", "System.UInt64&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&iDefinition;
	params[1] = (intptr_t)&pPrice;
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
bool Facepunch_Steamworks::SteamNative::SteamInventory::GetResultItemProperty(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle, uint32_t unItemIndex, mscorlib::System::String* pchPropertyName, mscorlib::System::String& pchValueBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResultItemProperty", std::vector<std::string> { "SteamNative.SteamInventoryResult_t", "System.UInt32", "System.String", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&resultHandle;
	params[1] = (intptr_t)&unItemIndex;
	params[2] = (intptr_t)pchPropertyName;
	params[3] = (intptr_t)&pchValueBuffer;
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
IL2CPP::Array<Facepunch_Steamworks::SteamNative::SteamItemDetails_t>* Facepunch_Steamworks::SteamNative::SteamInventory::GetResultItems(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResultItems", std::vector<std::string> { "SteamNative.SteamInventoryResult_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Facepunch_Steamworks::SteamNative::SteamItemDetails_t>*)returnValue;
}
Facepunch_Steamworks::SteamNative::Result Facepunch_Steamworks::SteamNative::SteamInventory::GetResultStatus(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResultStatus", std::vector<std::string> { "SteamNative.SteamInventoryResult_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::Result ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::Result));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::Result>(*(Facepunch_Steamworks::SteamNative::Result*)il2cpp_object_unbox(returnValue));
}
uint32_t Facepunch_Steamworks::SteamNative::SteamInventory::GetResultTimestamp(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResultTimestamp", std::vector<std::string> { "SteamNative.SteamInventoryResult_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::SteamInventory::LoadItemDefinitions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadItemDefinitions");
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
Facepunch_Steamworks::SteamNative::CallbackHandle* Facepunch_Steamworks::SteamNative::SteamInventory::RequestPrices(mscorlib::System::Action_2<Facepunch_Steamworks::SteamNative::SteamInventoryRequestPricesResult_t, mscorlib::System::Boolean>* CallbackFunction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestPrices", std::vector<std::string> { "System.Action`2<SteamNative.SteamInventoryRequestPricesResult_t,System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)CallbackFunction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::CallbackHandle*)returnValue;
}
bool Facepunch_Steamworks::SteamNative::SteamInventory::SerializeResult(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t resultHandle, intptr_t pOutBuffer, uint32_t& punOutBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeResult", std::vector<std::string> { "SteamNative.SteamInventoryResult_t", "System.IntPtr", "System.UInt32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&resultHandle;
	params[1] = (intptr_t)&pOutBuffer;
	params[2] = (intptr_t)&punOutBufferSize;
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
