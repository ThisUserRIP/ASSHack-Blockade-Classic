#include "System_Configuration_SettingsSerializeAsAttribute.h"

IL2CPP::Il2CppClass* System::System::Configuration::SettingsSerializeAsAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "SettingsSerializeAsAttribute");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::SettingsSerializeAsAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Configuration::SettingsSerializeAsAttribute::_ctor(System::Configuration::SettingsSerializeAs serializeAs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Configuration.SettingsSerializeAs" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&serializeAs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Configuration::SettingsSerializeAs System::System::Configuration::SettingsSerializeAsAttribute::get_SerializeAs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SerializeAs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Configuration::SettingsSerializeAs ret;
		std::memset(&ret, 0, sizeof(System::Configuration::SettingsSerializeAs));
		return ret;
	}
	return static_cast<System::Configuration::SettingsSerializeAs>(*(System::Configuration::SettingsSerializeAs*)il2cpp_object_unbox(returnValue));
}
