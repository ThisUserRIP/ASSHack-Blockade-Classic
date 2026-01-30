#include "Mono_Security_Interface_TlsException.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::TlsException::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "TlsException");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::TlsException::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::Interface::TlsException::_ctor(Mono_Security::Mono::Security::Interface::Alert* alert, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.Interface.Alert", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)alert;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Security::Interface::TlsException::_ctor(Mono_Security::Mono::Security::Interface::AlertDescription description, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.Interface.AlertDescription", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&description;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
