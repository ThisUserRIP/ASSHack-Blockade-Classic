#include "Facepunch_Steamworks_Interop_NativeInterface.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks.Interop", "NativeInterface");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface::InitClient(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitClient", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)steamworks;
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
void Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface::FillInterfaces(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, int32_t hpipe, int32_t huser)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillInterfaces", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)steamworks;
	params[1] = (intptr_t)&hpipe;
	params[2] = (intptr_t)&huser;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
