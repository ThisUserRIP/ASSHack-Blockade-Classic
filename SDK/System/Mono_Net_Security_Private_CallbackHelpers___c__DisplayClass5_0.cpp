#include "Mono_Net_Security_Private_CallbackHelpers___c__DisplayClass5_0.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass5_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::Mono::Net::Security::Private::CallbackHelpers::GetIl2CppClass(), "<>c__DisplayClass5_0");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass5_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass5_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass5_0::_MonoToPublic_b__0(mscorlib::System::Object* t, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* c, System::Security::Cryptography::X509Certificates::X509Chain* ch, System::Net::Security::SslPolicyErrors e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<MonoToPublic>b__0", std::vector<std::string> { "System.Object", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain", "System.Net.Security.SslPolicyErrors" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)c;
	params[2] = (intptr_t)ch;
	params[3] = (intptr_t)&e;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
