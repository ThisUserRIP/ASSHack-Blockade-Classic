#include "SteamNative_HTML_LinkAtPosition_t.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "HTML_LinkAtPosition_t");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::FromPointer(intptr_t p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromPointer", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t>(*(Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::StructSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StructSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::Register(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Register", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)steamworks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::OnResultThis(intptr_t self, intptr_t param)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnResultThis", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&self;
	params[1] = (intptr_t)&param;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::OnResultWithInfoThis(intptr_t self, intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnResultWithInfoThis", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Boolean", "SteamNative.SteamAPICall_t" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&self;
	params[1] = (intptr_t)&param;
	params[2] = (intptr_t)&failure;
	params[3] = (intptr_t)&call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::OnGetSizeThis(intptr_t self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGetSizeThis", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::OnGetSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGetSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::OnResult(intptr_t param)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnResult", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&param;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::HTML_LinkAtPosition_t::OnResultWithInfo(intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnResultWithInfo", std::vector<std::string> { "System.IntPtr", "System.Boolean", "SteamNative.SteamAPICall_t" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&param;
	params[1] = (intptr_t)&failure;
	params[2] = (intptr_t)&call;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
