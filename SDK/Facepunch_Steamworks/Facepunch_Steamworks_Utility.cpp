#include "Facepunch_Steamworks_Utility.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Utility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "Utility");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Utility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Facepunch_Steamworks::Facepunch::Steamworks::Utility::FormatPrice(mscorlib::System::String* currency, uint64_t price)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatPrice", std::vector<std::string> { "System.String", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)currency;
	params[1] = (intptr_t)&price;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Facepunch_Steamworks::Facepunch::Steamworks::Utility::FormatPrice(mscorlib::System::String* currency, double price)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatPrice", std::vector<std::string> { "System.String", "System.Double" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)currency;
	params[1] = (intptr_t)&price;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
