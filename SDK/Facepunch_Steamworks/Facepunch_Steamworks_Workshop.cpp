#include "Facepunch_Steamworks_Workshop.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Workshop::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "Workshop");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Workshop::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::Facepunch::Steamworks::Workshop::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, Facepunch_Steamworks::SteamNative::SteamUGC* ugc, Facepunch_Steamworks::SteamNative::SteamRemoteStorage* remoteStorage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks", "SteamNative.SteamUGC", "SteamNative.SteamRemoteStorage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)steamworks;
	params[1] = (intptr_t)ugc;
	params[2] = (intptr_t)remoteStorage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Workshop::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Workshop::onItemInstalled(Facepunch_Steamworks::SteamNative::ItemInstalled_t obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onItemInstalled", std::vector<std::string> { "SteamNative.ItemInstalled_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Workshop::onDownloadResult(Facepunch_Steamworks::SteamNative::DownloadItemResult_t obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onDownloadResult", std::vector<std::string> { "SteamNative.DownloadItemResult_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
