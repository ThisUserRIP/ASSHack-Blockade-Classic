#include "Mono_Security_X509_SafeBag.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::X509::SafeBag::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.X509", "SafeBag");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::X509::SafeBag::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::X509::SafeBag::_ctor(mscorlib::System::String* bagOID, Mono_Security::Mono::Security::ASN1* asn1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bagOID;
	params[1] = (intptr_t)asn1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Mono_Security::Mono::Security::X509::SafeBag::get_BagOID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BagOID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Mono_Security::Mono::Security::ASN1* Mono_Security::Mono::Security::X509::SafeBag::get_ASN1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ASN1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::ASN1*)returnValue;
}
