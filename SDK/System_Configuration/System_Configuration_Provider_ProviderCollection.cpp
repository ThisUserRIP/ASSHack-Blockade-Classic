#include "System_Configuration_Provider_ProviderCollection.h"

IL2CPP::Il2CppClass* System_Configuration::System::Configuration::Provider::ProviderCollection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Configuration.dll", "System.Configuration.Provider", "ProviderCollection");
	return il2cppclass;
}
mscorlib::System::Type* System_Configuration::System::Configuration::Provider::ProviderCollection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Configuration::System::Configuration::Provider::ProviderCollection::Add(System_Configuration::System::Configuration::Provider::ProviderBase* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.Configuration.Provider.ProviderBase" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
