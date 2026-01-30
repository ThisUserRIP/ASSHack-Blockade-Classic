#include "SteamNative_HTML_ShowToolTip_t_PackSmall.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t_PackSmall::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t::GetIl2CppClass(), "PackSmall");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t_PackSmall::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t_PackSmall::op_Implicit(Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t_PackSmall d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "SteamNative.HTML_ShowToolTip_t/PackSmall" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t>(*(Facepunch_Steamworks::SteamNative::HTML_ShowToolTip_t*)il2cpp_object_unbox(returnValue));
}
