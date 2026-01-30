#include "Mono_Security_Interface_Alert.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::Alert::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "Alert");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::Alert::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::AlertLevel Mono_Security::Mono::Security::Interface::Alert::get_Level()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Level");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Security::Interface::AlertLevel ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Security::Interface::AlertLevel));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Security::Interface::AlertLevel>(*(Mono_Security::Mono::Security::Interface::AlertLevel*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Security::Interface::AlertDescription Mono_Security::Mono::Security::Interface::Alert::get_Description()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Description");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Security::Interface::AlertDescription ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Security::Interface::AlertDescription));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Security::Interface::AlertDescription>(*(Mono_Security::Mono::Security::Interface::AlertDescription*)il2cpp_object_unbox(returnValue));
}
void Mono_Security::Mono::Security::Interface::Alert::_ctor(Mono_Security::Mono::Security::Interface::AlertDescription description)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.Interface.AlertDescription" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&description;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Security::Interface::Alert::inferAlertLevel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "inferAlertLevel");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Mono_Security::Mono::Security::Interface::Alert::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
