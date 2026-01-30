#include "Mono_Net_Security_Private_CallbackHelpers___c__DisplayClass8_0.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass8_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Net::Security::Private::CallbackHelpers::GetIl2CppClass(), "<>c__DisplayClass8_0");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass8_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass8_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass8_0::_MonoToInternal_b__0(mscorlib::System::String* t, System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* rc, IL2CPP::Array<mscorlib::System::String*>* ai)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<MonoToInternal>b__0", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.String[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)lc;
	params[2] = (intptr_t)rc;
	params[3] = (intptr_t)ai;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
