#include "Mono_Net_CFNetwork___c__DisplayClass13_0.h"

IL2CPP::Il2CppClass* System::Mono::Net::CFNetwork___c__DisplayClass13_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Net::CFNetwork::GetIl2CppClass(), "<>c__DisplayClass13_0");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::CFNetwork___c__DisplayClass13_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::CFNetwork___c__DisplayClass13_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::CFNetwork___c__DisplayClass13_0::_ExecuteProxyAutoConfigurationURL_b__0(intptr_t client, intptr_t proxyList, intptr_t error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ExecuteProxyAutoConfigurationURL>b__0", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&client;
	params[1] = (intptr_t)&proxyList;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
